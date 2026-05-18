/*
 * XREFs of sub_1800B3DDC @ 0x1800B3DDC
 * Callers:
 *     sub_1800B2670 @ 0x1800B2670 (sub_1800B2670.c)
 *     sub_1800B2C10 @ 0x1800B2C10 (sub_1800B2C10.c)
 *     sub_1800B2CD4 @ 0x1800B2CD4 (sub_1800B2CD4.c)
 *     sub_1800B4CD8 @ 0x1800B4CD8 (sub_1800B4CD8.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B52F0 @ 0x1800B52F0 (sub_1800B52F0.c)
 *     sub_1800B53C0 @ 0x1800B53C0 (sub_1800B53C0.c)
 *     sub_1800B55A0 @ 0x1800B55A0 (sub_1800B55A0.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 *     sub_1800B6020 @ 0x1800B6020 (sub_1800B6020.c)
 *     sub_1800B60F8 @ 0x1800B60F8 (sub_1800B60F8.c)
 *     sub_180107995 @ 0x180107995 (sub_180107995.c)
 *     sub_1801079A7 @ 0x1801079A7 (sub_1801079A7.c)
 *     sub_1801079C0 @ 0x1801079C0 (sub_1801079C0.c)
 *     sub_1801079D9 @ 0x1801079D9 (sub_1801079D9.c)
 *     sub_1801079F2 @ 0x1801079F2 (sub_1801079F2.c)
 *     sub_180107A65 @ 0x180107A65 (sub_180107A65.c)
 *     sub_180107A7B @ 0x180107A7B (sub_180107A7B.c)
 *     sub_180107AE0 @ 0x180107AE0 (sub_180107AE0.c)
 *     sub_180107AF6 @ 0x180107AF6 (sub_180107AF6.c)
 *     sub_180107B21 @ 0x180107B21 (sub_180107B21.c)
 *     sub_180107B33 @ 0x180107B33 (sub_180107B33.c)
 *     sub_180107B45 @ 0x180107B45 (sub_180107B45.c)
 *     sub_180107B7B @ 0x180107B7B (sub_180107B7B.c)
 *     unknown_libname_77 @ 0x180107B8D (unknown_libname_77.c)
 *     sub_180107B9F @ 0x180107B9F (sub_180107B9F.c)
 *     sub_180107BB1 @ 0x180107BB1 (sub_180107BB1.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B44A4 @ 0x1800B44A4 (sub_1800B44A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B3DDC(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  sub_1800B44A4();
  sub_180010910(a1 + 160);
  sub_180010910(a1 + 144);
  result = sub_180010910(a1 + 16);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
