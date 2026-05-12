/*
 * XREFs of sub_1C0049B10 @ 0x1C0049B10
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C005C694 @ 0x1C005C694 (sub_1C005C694.c)
 */

__int64 __fastcall sub_1C0049B10(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rax
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+58h] [rbp+10h]

  HIBYTE(v14) = 0;
  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  v4 = sub_1C000E2EC(a1);
  if ( !v4 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3238002694LL;
    }
    else
    {
      v7 = *(unsigned __int8 *)(a2 + 16);
      v8 = *(unsigned __int8 *)(a2 + 20);
      v9 = *(unsigned __int8 *)(a2 + 24);
      LOBYTE(v14) = *(_BYTE *)(a2 + 16);
      BYTE1(v14) = *(_BYTE *)(a2 + 20);
      BYTE2(v14) = *(_BYTE *)(a2 + 24);
      v10 = sub_1C00081BC((__int64)v4, v14);
      if ( v10 )
      {
        v11 = *(void **)(v10 + 8);
        return sub_1C005C694(v11);
      }
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
        && BYTE1(off_1C0093070->Timer) >= 3u )
      {
        v13 = v9;
        v12 = v8;
        sub_1C003EEB0((__int64)off_1C0093070->AttachedDevice, 0x18u, (__int64)&unk_1C0083380, v7, v12, v13);
      }
    }
  }
  v11 = (void *)*((_QWORD *)v4 + 1);
  return sub_1C005C694(v11);
}
