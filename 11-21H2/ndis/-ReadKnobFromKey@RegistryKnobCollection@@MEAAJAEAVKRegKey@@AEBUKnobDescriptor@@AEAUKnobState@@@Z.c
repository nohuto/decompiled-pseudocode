/*
 * XREFs of ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01138B0
 * Callers:
 *     ?ReadKnobFromKey@ExecutionContextKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0113880 (-ReadKnobFromKey@ExecutionContextKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobS.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C0033A10 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0113A50 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z @ 0x1C0113AE0 (-QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ReadKnobFromKey(
        RegistryKnobCollection *this,
        KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  ConfigKnobFlag Flags; // eax
  wchar_t *Name; // rdx
  unsigned int v10; // edi
  __int64 v11; // rcx
  wchar_t *v12; // rax
  NTSTATUS v13; // ebx
  __int16 v14; // cx
  void *m_ptr; // rcx
  unsigned __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-9h] BYREF
  int v21; // [rsp+70h] [rbp+7h]

  Flags = a3->Flags;
  v17 = 0LL;
  Name = (wchar_t *)a3->Name;
  if ( (Flags & 4) != 0 )
  {
    v13 = KRegKey::QueryValueUlong64(a2, Name, &v17);
  }
  else
  {
    v10 = 0;
    ValueName = 0LL;
    if ( !Name )
      goto LABEL_9;
    v11 = 0x7FFFLL;
    v12 = Name;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    v13 = v11 == 0 ? 0xC000000D : 0;
    if ( v11 )
    {
      v14 = 2 * v11;
      ValueName.Buffer = Name;
      ValueName.Length = -2 - v14;
      ValueName.MaximumLength = -v14;
    }
    if ( v13 >= 0 )
    {
LABEL_9:
      m_ptr = a2->m_ptr;
      ResultLength = 0;
      v21 = 0;
      KeyValueInformation = 0LL;
      v13 = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
      if ( v13 >= 0 )
      {
        if ( DWORD1(KeyValueInformation) == 4 )
        {
          if ( DWORD2(KeyValueInformation) == 4 )
          {
            v10 = HIDWORD(KeyValueInformation);
            v13 = 0;
          }
          else
          {
            v13 = -1073741789;
          }
        }
        else
        {
          v13 = -1073741788;
        }
      }
    }
    v17 = v10;
  }
  if ( !v13 )
    v13 = KnobCollection::ValidateKnobValue(this, &v17, a3);
  if ( v13 < -1073741789 )
    goto LABEL_28;
  if ( v13 <= -1073741788 )
    goto LABEL_26;
  if ( v13 == -1073741772 )
    return 3221226021LL;
  if ( v13 == -1073739509 )
  {
LABEL_26:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_9435edde217234e5ab0ef78f2248663b_Traceguids,
        a3->Name,
        v13);
    return 3221226021LL;
  }
  if ( v13 )
  {
LABEL_28:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_9435edde217234e5ab0ef78f2248663b_Traceguids,
        a3->Name,
        v13);
    return (unsigned int)v13;
  }
  else
  {
    *(_QWORD *)a4 = v17;
    return 0LL;
  }
}
