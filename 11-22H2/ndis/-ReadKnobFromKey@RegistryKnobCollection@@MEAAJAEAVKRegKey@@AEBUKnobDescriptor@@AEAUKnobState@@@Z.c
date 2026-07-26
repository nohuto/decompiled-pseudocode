/*
 * XREFs of ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01200A0
 * Callers:
 *     ?ReadKnobFromKey@ExecutionContextKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0120070 (-ReadKnobFromKey@ExecutionContextKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobS.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002BA00 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120244 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z @ 0x1C01202D4 (-QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ReadKnobFromKey(
        RegistryKnobCollection *this,
        KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  ConfigKnobFlag Flags; // eax
  wchar_t *Name; // r10
  unsigned int v9; // edi
  wchar_t *v10; // rax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  void *m_ptr; // rcx
  unsigned __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+70h] [rbp+7h]

  Flags = a3->Flags;
  Name = (wchar_t *)a3->Name;
  v15 = 0LL;
  if ( (Flags & 4) == 0 )
  {
    v9 = 0;
    ValueName = 0LL;
    if ( Name )
    {
      v10 = Name;
      v11 = 0x7FFFLL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      v12 = v11 == 0 ? 0xC000000D : 0;
      if ( !v11 )
      {
LABEL_9:
        v15 = v9;
        goto LABEL_10;
      }
      ValueName.Buffer = Name;
      ValueName.Length = 2 * (0x7FFF - v11);
      ValueName.MaximumLength = ValueName.Length + 2;
    }
    m_ptr = a2->m_ptr;
    ResultLength = 0;
    v19 = 0;
    KeyValueInformation = 0LL;
    v12 = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v12 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v9 = HIDWORD(KeyValueInformation);
          v12 = 0;
        }
        else
        {
          v12 = -1073741789;
        }
      }
      else
      {
        v12 = -1073741788;
      }
    }
    goto LABEL_9;
  }
  v12 = KRegKey::QueryValueUlong64(a2, Name, &v15);
LABEL_10:
  if ( !v12 )
    v12 = KnobCollection::ValidateKnobValue(this, &v15, a3);
  if ( v12 == -1073741772 )
    return 3221226021LL;
  if ( v12 == -1073741789 || v12 == -1073741788 || v12 == -1073739509 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_9435edde217234e5ab0ef78f2248663b_Traceguids,
        a3->Name,
        v12);
    return 3221226021LL;
  }
  if ( v12 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_9435edde217234e5ab0ef78f2248663b_Traceguids,
        a3->Name,
        v12);
    return (unsigned int)v12;
  }
  else
  {
    *(_QWORD *)a4 = v15;
    return 0LL;
  }
}
