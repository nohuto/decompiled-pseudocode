/*
 * XREFs of sub_140995040 @ 0x140995040
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __fastcall sub_140995040(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  sub_1402D66A8((ULONG_PTR)&qword_140C229A0);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140C229B4;
    ++dword_140C22A18;
    byte_140C229B8 = 1;
    sub_14036972C(3u);
  }
  sub_14036972C(8u);
  sub_1402935D0((ULONG_PTR)&qword_140C229A0);
  if ( !--dword_140C229B0 )
  {
    sub_140A48330(v5);
    if ( byte_140C2341E )
    {
      byte_140C2341E = 0;
      sub_1408193F4();
    }
    sub_140A47CF8(v7, v6);
  }
}
