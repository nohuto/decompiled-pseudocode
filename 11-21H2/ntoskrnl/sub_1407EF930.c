/*
 * XREFs of sub_1407EF930 @ 0x1407EF930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1409A47BC @ 0x1409A47BC (sub_1409A47BC.c)
 */

void __fastcall sub_1407EF930(ULONG *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 **v4; // rax
  void *v5; // rcx
  __int64 v6; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  REGHANDLE v11; // rdi
  ULONG *v12; // [rsp+30h] [rbp-29h] BYREF
  _DWORD Src[20]; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Buffer; // [rsp+90h] [rbp+37h] BYREF

  v2 = 0LL;
  sub_140753094(1);
  v3 = *(__int64 **)a1;
  if ( *(ULONG **)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = (__int64 **)*((_QWORD *)a1 + 1), *v4 != (__int64 *)a1) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (__int64)v4;
  v5 = (void *)*((_QWORD *)a1 + 17);
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    *((_QWORD *)a1 + 17) = 0LL;
  }
  v6 = *((_QWORD *)a1 + 18);
  if ( v6 )
  {
    *((_QWORD *)a1 + 18) = 0LL;
    v2 = v6;
  }
  v7 = a1[9];
  --dword_140C24290;
  Buffer = 0LL;
  Buffer.Size = v7;
  RtlDeleteElementGenericTableAvl(&stru_140C244A0, &Buffer);
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  if ( v2 )
    PsReleaseProcessWakeCounter(v2);
  sub_14036B090(*((_QWORD **)a1 + 12));
  if ( *((_QWORD *)a1 + 20) )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C1CFD0);
    v10 = (_DWORD *)*((_QWORD *)a1 + 20);
    *((_QWORD *)a1 + 20) = 0LL;
    --*v10;
    sub_1402935D0((ULONG_PTR)&qword_140C1CFD0);
  }
  v12 = a1;
  if ( byte_140C5AE14 )
  {
    v11 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140011128) )
    {
      Buffer.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&Buffer.Size = 8LL;
      EtwWrite(v11, &stru_140011128, 0LL, 1u, &Buffer);
    }
  }
  if ( a1[26] )
  {
    if ( (unsigned __int8)sub_1407F0F98(v9, v8) )
      sub_1409A47BC(a1[4], a1[9]);
    if ( byte_140C24524 )
    {
      memset(Src, 0, 0x48uLL);
      Src[2] = a1[9];
      Src[0] = 17;
      sub_14036AF00(Src, 0x48uLL, 0);
    }
  }
  if ( !*((_BYTE *)a1 + 152) )
  {
    memset(Src, 0, 0x48uLL);
    Src[2] = a1[9];
    Src[0] = 9;
    sub_14036AF00(Src, 0x48uLL, 0);
  }
}
