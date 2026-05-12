/*
 * XREFs of sub_1C005A398 @ 0x1C005A398
 * Callers:
 *     sub_1C00513FC @ 0x1C00513FC (sub_1C00513FC.c)
 *     sub_1C0053468 @ 0x1C0053468 (sub_1C0053468.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0059E34 @ 0x1C0059E34 (sub_1C0059E34.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A300 @ 0x1C007A300 (sub_1C007A300.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 */

__int64 __fastcall sub_1C005A398(int *a1, _QWORD *a2, _BYTE *a3)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // ebx
  size_t v10; // rbx
  void *v11; // rax
  void *v12; // rdi
  __int64 i; // rcx
  __int64 v14; // rdx
  _OWORD v15[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = 0LL;
  v4 = *a1;
  memset(v15, 0, sizeof(v15));
  if ( v4 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 437);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 438);
  }
  else
  {
    if ( v4 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 751);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 752);
  }
  if ( !v7 )
    return (unsigned int)-1073741637;
  v10 = (unsigned int)(80 * *(_DWORD *)(v7 + 128));
  v11 = (void *)sub_1C0007CF4(256LL, v10, 1129603410LL, *((_QWORD *)a1 + 1));
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741801;
  memset_0(v11, 0, v10);
  v8 = sub_1C007A484(v6, 2LL, v15);
  if ( v8 < 0 )
  {
    sub_1C0042880(a3, 32LL, (__int64)"TcglibOpenSession");
LABEL_22:
    ExFreePoolWithTag(v12, 0x43546152u);
    return (unsigned int)v8;
  }
  v8 = sub_1C007A300(v6, v15, *(unsigned int *)(v7 + 128), v12);
  if ( v8 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 128); *((_QWORD *)v12 + v14 + 7) *= *(unsigned int *)(v7 + 100) )
    {
      v14 = 10 * i;
      i = (unsigned int)(i + 1);
      *((_QWORD *)v12 + v14 + 6) *= *(unsigned int *)(v7 + 100);
    }
    *a2 = v12;
    v12 = 0LL;
  }
  else
  {
    sub_1C0042880(a3, 32LL, (__int64)"TcglibGetLockingObjects");
  }
  sub_1C0079C54(v6, v15);
  if ( v12 )
    goto LABEL_22;
  return (unsigned int)v8;
}
