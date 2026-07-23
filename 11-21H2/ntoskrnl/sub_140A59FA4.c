/*
 * XREFs of sub_140A59FA4 @ 0x140A59FA4
 * Callers:
 *     sub_14082A324 @ 0x14082A324 (sub_14082A324.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_14025E878 @ 0x14025E878 (sub_14025E878.c)
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403C2554 @ 0x1403C2554 (sub_1403C2554.c)
 *     sub_1403C25A4 @ 0x1403C25A4 (sub_1403C25A4.c)
 *     sub_1403C25B8 @ 0x1403C25B8 (sub_1403C25B8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A5A148 @ 0x140A5A148 (sub_140A5A148.c)
 *     sub_140A5A324 @ 0x140A5A324 (sub_140A5A324.c)
 */

__int64 __fastcall sub_140A59FA4(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  __int16 v8; // cx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( sub_1403C25B8() )
  {
    byte_140D06AA6 = 1;
    return 1LL;
  }
  if ( (qword_140D06958 & 0x18000) == 0x8000 )
    *(_QWORD *)(v3 + 11520) = 3LL;
  v4 = byte_140E01841;
  if ( !(_BYTE)byte_140E01841 && sub_1403C25A4() )
    byte_140D069E3 = 1;
  if ( !byte_140C54EE0 && !byte_140D069E3 )
    return 1LL;
  if ( v4 )
    KeBugCheckEx(0x5Du, 0x4B766120uLL, 0x4B434554uLL, 0LL, 0LL);
  v5 = __readcr3();
  *(_QWORD *)(a1 + 40576) = v5;
  *(_QWORD *)(v2 + 4216) = *(_QWORD *)(v2 + 4100);
  sub_1403C2554(a1, v2);
  *(_QWORD *)(v7 + 4100) = v7 + 16896;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    LOBYTE(v6) = 1;
    sub_140A5A324(v7, v6);
    *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) = 1;
    byte_140D32E90 = 1;
    _InterlockedOr(dword_140D3337C, 0x4000u);
    sub_140347550();
    *(_WORD *)(a1 + 40618) = 24;
    v10 = *(_QWORD *)(a1 + 35232);
    if ( (v10 & 0x40000000000LL) != 0 )
    {
      v11 = __readcr4();
      __writecr4(v11 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v12 = __readcr3();
      __writecr3(v12 | 2);
      byte_140D0688A |= 1u;
      v10 = *(_QWORD *)(a1 + 35232);
    }
    if ( (v10 & 0x240000000000LL) == 0x240000000000LL )
      byte_140D0688A |= 2u;
    sub_14025E878();
    byte_140E01840 = 1;
    dword_140D06C10 = 2 - (byte_140D0688A != 0);
    goto LABEL_12;
  }
  if ( (unsigned int)sub_140A5A148(a1, v7) )
  {
    v8 = *(_WORD *)(sub_140348800(0) + 40618);
    *(_DWORD *)(a1 + 40600) |= 2u;
    *(_WORD *)(a1 + 40618) = v8;
LABEL_12:
    if ( byte_140D0688A )
      _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40576), 0x3FuLL);
    return 1LL;
  }
  return 0LL;
}
