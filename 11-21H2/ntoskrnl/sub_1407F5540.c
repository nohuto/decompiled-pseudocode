/*
 * XREFs of sub_1407F5540 @ 0x1407F5540
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409DA178 @ 0x1409DA178 (sub_1409DA178.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_140373DA0 @ 0x140373DA0 (sub_140373DA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140583D44 @ 0x140583D44 (sub_140583D44.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1407F584C @ 0x1407F584C (sub_1407F584C.c)
 *     sub_1409AD76C @ 0x1409AD76C (sub_1409AD76C.c)
 */

__int64 __fastcall sub_1407F5540(ULONG_PTR BugCheckParameter1, __int64 *a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  PVOID v8; // rsi
  int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char v12; // dl
  __int64 v13; // [rsp+40h] [rbp-98h]
  unsigned int v14; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  Object[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a3 < 0xC )
    return 3221225476LL;
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v13) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v13) && !SeSinglePrivilegeCheck(stru_140D3CA18, a4) )
    return 3221225569LL;
  result = sub_140732D40(BugCheckParameter1, 0x2000, (__int64)PsProcessType, a4, 0x73576D4Du, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object[0];
    if ( *((PVOID *)KeGetCurrentThread() + 23) == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      sub_14030D5C0((ULONG_PTR)v8, 0LL, (__int64)v16, v7);
    }
    if ( HIDWORD(v13) )
    {
      if ( (v14 & 0xFFFFFFC0) == 0 )
      {
        if ( (v14 & 1) != ((v14 & 2) == 0)
          && ((v14 & 8) == 0 || (v14 & 2) != 0)
          && ((v14 & 0x10) == 0 || (v14 & 8) != 0) )
        {
          sub_140373DA0((__int64)v8 + 1664);
          v9 = (v14 >> 3) & 4;
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 8) != 0 )
              sub_1407F584C();
            v10 = sub_140373BAC((__int64)v8 + 1664, v9);
            if ( (v14 & 8) != 0 )
              sub_1407F575C((v14 & 0x10) != 0);
            goto LABEL_19;
          }
          v12 = v9 | 1;
          if ( (v14 & 4) == 0 )
            v12 = (v14 >> 3) & 4;
          v11 = sub_140583D44((__int64)v8 + 1664, v12);
          goto LABEL_38;
        }
        v10 = -1073741637;
LABEL_19:
        if ( LODWORD(Object[0]) )
          sub_1402D0930((__int64)v16, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v10;
      }
    }
    else if ( (v14 & 0xFFFFFFFE) == 0 )
    {
      v11 = sub_1409AD76C((ULONG_PTR)v8);
LABEL_38:
      v10 = v11;
      goto LABEL_19;
    }
    v10 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
