/*
 * XREFs of sub_1402E599C @ 0x1402E599C
 * Callers:
 *     sub_1402E5920 @ 0x1402E5920 (sub_1402E5920.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1402E599C(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( v3 < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v3 >> 43) & 0x3FF));
    sub_14028CE10(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 17520));
  }
  sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = sub_1402E670C(KeGetCurrentThread());
  v10 = v9;
  if ( v8 < 5 )
    v10 = 7LL;
  sub_1403171A0(a1, a2, 1LL, v10);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v12 = *(_QWORD *)(a3 + 40);
    if ( v12 < 0 )
      sub_1402E5B0C(48 * (v12 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v13 = sub_140317A10(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return sub_1402E5B0C(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  return result;
}
