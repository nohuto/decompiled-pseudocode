/*
 * XREFs of sub_14069A1F8 @ 0x14069A1F8
 * Callers:
 *     sub_140561D38 @ 0x140561D38 (sub_140561D38.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_140804E80 @ 0x140804E80 (sub_140804E80.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_1 @ 0x14094DE60 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_14094DE60.c)
 *     sub_14094E570 @ 0x14094E570 (sub_14094E570.c)
 * Callees:
 *     sub_140220238 @ 0x140220238 (sub_140220238.c)
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14069A1F8(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned int *v4; // r14
  __int64 v5; // r13
  unsigned int v6; // r15d
  NTSTATUS v7; // eax
  unsigned int v8; // ecx
  const UNICODE_STRING **v9; // r12
  const UNICODE_STRING *v10; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  NTSTATUS v13; // eax
  unsigned int v14; // r10d
  const wchar_t **v15; // r13
  const wchar_t *v16; // rax
  unsigned int v17; // edi
  __int64 Pool2; // rdi
  __int64 *v19; // rax
  int v20; // eax
  const wchar_t **v22; // r15
  unsigned int v23; // edi
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _WORD *v26; // rsi
  _DWORD *v27; // rax
  wchar_t **v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  void *v31; // rax
  unsigned int v32; // [rsp+28h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-51h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  void *Src; // [rsp+48h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  const wchar_t *HashValue; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a1;
  LODWORD(HashValue) = 0;
  v4 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  Src = 0LL;
  DestinationString = 0LL;
  v32 = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v7 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
  v8 = (unsigned int)HashValue;
  if ( v7 < 0 )
    v8 = 0;
  v9 = (const UNICODE_STRING **)(*(_QWORD *)(v3 + 24) + 16LL * (v8 % 0x7F));
  v10 = *v9;
  if ( *v9 != (const UNICODE_STRING *)v9 )
  {
    v12 = 0;
    do
    {
      Pool2 = (__int64)v10;
      if ( RtlEqualUnicodeString(&DestinationString, v10 + 1, 1u) )
        break;
      v10 = *(const UNICODE_STRING **)&v10->Length;
      Pool2 = 0LL;
    }
    while ( v10 != (const UNICODE_STRING *)v9 );
    if ( Pool2 )
    {
      if ( *(_DWORD *)(Pool2 + 32) != -1 )
        goto LABEL_18;
      v12 = -1073741823;
      goto LABEL_21;
    }
    v3 = a1;
  }
  ObjectAttributes.RootDirectory = *(HANDLE *)(v3 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = sub_14067B838(KeyHandle, (const WCHAR *)&dword_140A416D4, 0, &P);
    v4 = (unsigned int *)P;
    v12 = v13;
    if ( v13 < 0 )
      goto LABEL_19;
    if ( !sub_1402D199C(P) )
    {
      v12 = -1073741823;
      goto LABEL_19;
    }
    v15 = (const wchar_t **)&off_140A3A460;
    v16 = (const wchar_t *)((char *)v4 + v4[2]);
    v17 = v14;
    HashValue = v16;
    while ( wcsicmp(*v15, v16) )
    {
      v16 = HashValue;
      ++v17;
      v15 += 2;
      if ( v17 >= 8 )
        goto LABEL_50;
    }
    v5 = (__int64)*(&off_140A3A460 + 2 * v17 + 1);
    if ( !v5 )
    {
LABEL_50:
      v12 = -1073741772;
      goto LABEL_19;
    }
LABEL_13:
    Pool2 = ExAllocatePool2(256LL, 48LL, 1667526736LL);
    if ( Pool2 )
    {
      v19 = (__int64 *)v9[1];
      if ( (const UNICODE_STRING **)*v19 != v9 )
        goto LABEL_45;
      *(_QWORD *)Pool2 = v9;
      *(_QWORD *)(Pool2 + 8) = v19;
      *v19 = Pool2;
      v9[1] = (const UNICODE_STRING *)Pool2;
      if ( RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), a2) )
      {
        if ( v5 )
        {
          *(_DWORD *)(Pool2 + 32) = -1;
          v20 = sub_14042A5E0(a1, KeyHandle);
          v12 = v20;
          if ( v20 >= 0 )
          {
LABEL_18:
            *a3 = Pool2;
            goto LABEL_19;
          }
          if ( v20 == -1073741772 )
            v12 = -1073741823;
LABEL_38:
          v24 = *(_QWORD *)Pool2;
          if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) == Pool2 )
          {
            v25 = *(_QWORD **)(Pool2 + 8);
            if ( *v25 == Pool2 )
            {
              *v25 = v24;
              *(_QWORD *)(v24 + 8) = v25;
              ExFreePoolWithTag((PVOID)Pool2, 0);
              goto LABEL_19;
            }
          }
LABEL_45:
          __fastfail(3u);
        }
        v26 = Src;
        if ( Src )
        {
          *(_DWORD *)(Pool2 + 32) = 1;
          v29 = -1LL;
          do
            ++v29;
          while ( v26[v29] );
          v30 = 2 * v29 + 2;
          *(_DWORD *)(Pool2 + 36) = v30;
          v31 = (void *)ExAllocatePool2(256LL, v30, 1667526736LL);
          *(_QWORD *)(Pool2 + 40) = v31;
          if ( v31 )
          {
            memmove(v31, v26, *(unsigned int *)(Pool2 + 36));
            goto LABEL_18;
          }
        }
        else
        {
          *(_DWORD *)(Pool2 + 32) = 4;
          *(_DWORD *)(Pool2 + 36) = 4;
          v27 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
          *(_QWORD *)(Pool2 + 40) = v27;
          if ( v27 )
          {
            *v27 = v6;
            goto LABEL_18;
          }
        }
      }
      v12 = -1073741670;
      goto LABEL_38;
    }
    v12 = -1073741670;
LABEL_19:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_21;
  }
  if ( v11 == -1073741772 )
  {
    v12 = 0;
    v22 = (const wchar_t **)&off_140A39C90;
    v23 = 0;
    while ( wcsicmp(*v22, a2) )
    {
      ++v23;
      v22 += 3;
      if ( v23 >= 4 )
        goto LABEL_28;
    }
    v28 = &(&off_140A39C90)[3 * v23];
    if ( v28 )
    {
      v6 = *((_DWORD *)v28 + 4);
      Src = v28[1];
      goto LABEL_13;
    }
LABEL_28:
    if ( sub_140220238((__int64)a2, &v32) )
    {
      v6 = v32;
      goto LABEL_13;
    }
    v12 = -1073741772;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v12;
}
