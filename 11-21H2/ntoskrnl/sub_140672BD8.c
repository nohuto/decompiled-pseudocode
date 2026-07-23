/*
 * XREFs of sub_140672BD8 @ 0x140672BD8
 * Callers:
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409AEB50 @ 0x1409AEB50 (sub_1409AEB50.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140672BD8(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 *v8; // rax
  unsigned __int16 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int16 v13; // [rsp+20h] [rbp-88h]
  int v14; // [rsp+24h] [rbp-84h]
  unsigned int v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  ULONG_PTR v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  _OWORD v21[3]; // [rsp+58h] [rbp-50h] BYREF

  v19 = a2;
  memset(v21, 0, sizeof(v21));
  v5 = 0;
  v14 = 0;
  v6 = *(_QWORD *)(a2 + 1360);
  v17 = v6;
  if ( !v6 )
    return;
  if ( *(_QWORD *)(a2 + 1088) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      if ( a2 != *(_QWORD *)(a1 + 544) )
        v5 = 2;
      v14 = v5;
      if ( v5 < 2 )
      {
LABEL_21:
        if ( (v5 & 1) != 0 )
          sub_14030D5C0(a2, 0LL, (__int64)v21, a4);
        goto LABEL_3;
      }
    }
    else
    {
      v5 = 3;
      v14 = 3;
    }
    if ( !sub_140347810((struct _EX_RUNDOWN_REF *)(a2 + 1112)) )
      return;
    goto LABEL_21;
  }
LABEL_3:
  v15 = v5;
  v7 = 0LL;
  v8 = *(__int64 **)(a2 + 1408);
  if ( v8 )
    v7 = *v8;
  v18 = v7;
  do
  {
    do
    {
      v13 = *(_WORD *)(a2 + 1040);
      v9 = v13;
      v10 = v13;
      v20 = v13;
      v11 = *(_QWORD *)(a2 + 8LL * v13 + 88);
    }
    while ( !v11 );
    if ( (*(_DWORD *)(a2 + 632) & 0x1000) != 0 )
      v11 = 0LL;
    v16 = v11;
    *(_QWORD *)(v6 + 312) = v11;
    if ( v7 )
      *(_DWORD *)(v7 + 192) = v11 | HIDWORD(v11);
    _InterlockedOr(v12, 0);
  }
  while ( v9 != *(_WORD *)(a2 + 1040) || v11 != *(_QWORD *)(a2 + 8 * v10 + 88) );
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
      sub_1402D0930((__int64)v21, 0LL);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(a2 + 1112));
  }
}
