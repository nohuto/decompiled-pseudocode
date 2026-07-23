/*
 * XREFs of sub_1409CC540 @ 0x1409CC540
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_1409CC1BC @ 0x1409CC1BC (sub_1409CC1BC.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CC540(_DWORD *a1, int a2, __int64 a3)
{
  int appended; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rcx
  const UNICODE_STRING *v7; // rdi
  __int16 v8; // cx
  __int64 v9; // rbx
  wchar_t *Pool2; // rax
  __int64 v11; // rcx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-39h] BYREF
  int v14; // [rsp+30h] [rbp-29h] BYREF
  int v15; // [rsp+34h] [rbp-25h]
  UNICODE_STRING *p_DestinationString; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+1Bh]
  int v22; // [rsp+78h] [rbp+1Fh]
  const UNICODE_STRING *v23; // [rsp+80h] [rbp+27h]
  unsigned __int16 v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  v24 = 0;
  SourceString.Buffer = L"POLICYAPPID://";
  appended = 0;
  v5 = 0LL;
  Destination = 0LL;
  v17 = 0LL;
  if ( a2 == 536 )
  {
    v5 = a1;
    if ( !*a1 )
    {
      a1 = (_DWORD *)v17;
      goto LABEL_7;
    }
    DWORD2(v17) = 524;
  }
  else
  {
    DWORD2(v17) = a2;
  }
  *(_QWORD *)&v17 = a1;
LABEL_7:
  if ( !a1 )
    goto LABEL_9;
  v14 = 1;
  p_DestinationString = &DestinationString;
  v15 = 1;
  RtlInitUnicodeString(&DestinationString, L"SMARTLOCKER://SMARTSCREENORIGINCLAIM");
  v6 = *(_QWORD *)(a3 + 776);
  v23 = (const UNICODE_STRING *)&v17;
  v20 = 16;
  v22 = 1;
  v21 = 65;
  v25 = 4;
  appended = sub_140204870(v6, &v25, (__int64)&v14);
  if ( appended >= 0 )
  {
LABEL_9:
    if ( v5 )
    {
      v7 = (const UNICODE_STRING *)*((_QWORD *)v5 + 66);
      RtlInitUnicodeString(&Destination, 0LL);
      while ( v7 )
      {
        appended = sub_1402DE190(0x1Cu, v7[-2].Length, (__int16 *)&v24);
        if ( appended < 0 )
          break;
        appended = sub_1402DE190(v24, v8 - 26, (__int16 *)&v24);
        if ( appended < 0 )
          break;
        v9 = v24;
        Destination.Length = 0;
        if ( v24 > Destination.MaximumLength )
        {
          if ( Destination.Buffer )
            ExFreePoolWithTag(Destination.Buffer, 0x434F6553u);
          Destination.MaximumLength = v9;
          Pool2 = (wchar_t *)ExAllocatePool2(258LL, v9, 1129276755LL);
          Destination.Buffer = Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_22;
          }
        }
        RtlCopyUnicodeString(&Destination, &SourceString);
        appended = RtlAppendUnicodeStringToString(&Destination, v7 - 2);
        if ( appended < 0 )
          break;
        v11 = *(_QWORD *)(a3 + 776);
        p_DestinationString = &DestinationString;
        v14 = 1;
        v23 = v7 - 1;
        v15 = 1;
        DestinationString = Destination;
        v20 = 3;
        v22 = 1;
        v21 = 65;
        v25 = 4;
        appended = sub_140204870(v11, &v25, (__int64)&v14);
        if ( appended < 0 )
          break;
        v7 = *(const UNICODE_STRING **)&v7->Length;
      }
    }
  }
  Pool2 = Destination.Buffer;
LABEL_22:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x434F6553u);
  return (unsigned int)appended;
}
