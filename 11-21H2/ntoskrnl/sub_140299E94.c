/*
 * XREFs of sub_140299E94 @ 0x140299E94
 * Callers:
 *     sub_140A6F1FC @ 0x140A6F1FC (sub_140A6F1FC.c)
 * Callees:
 *     sub_14041F650 @ 0x14041F650 (sub_14041F650.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A73424 @ 0x140A73424 (sub_140A73424.c)
 */

char __fastcall sub_140299E94(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // r10d
  char v9; // si
  char result; // al
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v13; // r15
  __int64 v14; // r8
  char v15; // al
  unsigned int v16; // esi
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx

  v6 = *a3;
  if ( *a3 == -1073740768
    || (unsigned int)(v6 + 2147483645) <= 1
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( !a6 && ((unsigned int)v6 <= 0x4000001D || v6 == -1073741769 || v6 >= 1073741856) )
      return 0;
  }
  else
  {
    v9 = a6;
    if ( !a6 )
      return 0;
  }
  v11 = sub_140A6F7A0();
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = v11;
  sub_140A6F708(
    *((_QWORD *)CurrentPrcb + 4408),
    (unsigned int)(*((_DWORD *)CurrentPrcb + 8818) & *(_DWORD *)(a4 + 48)),
    a4);
  sub_14041F720((char *)CurrentPrcb + 256);
  LOBYTE(v14) = v9;
  v15 = sub_140A73424(a3, *((_QWORD *)CurrentPrcb + 4408), v14);
  v16 = *(_DWORD *)(a4 + 48);
  v17 = v15;
  sub_140A6F708(a4, *((_DWORD *)CurrentPrcb + 8818) & v16, *((_QWORD *)CurrentPrcb + 4408));
  *(_DWORD *)(a4 + 48) = v16;
  if ( (byte_140E01842 & 4) != 0 && (v16 & 0x100080) == 0x100080 )
  {
    v18 = *(_QWORD *)(a4 + 248);
    v19 = a4 + *(int *)(a4 + 1256);
    if ( *(_QWORD *)(v19 + 1240) != v18 )
    {
      *(_WORD *)(v19 + 1250) |= 1u;
      *(_QWORD *)(v19 + 1240) = v18;
    }
  }
  sub_14041F650((char *)CurrentPrcb + 256);
  LOBYTE(v20) = v13;
  sub_140A6F900(v20);
  result = v17;
  byte_140C343D0 = 0;
  return result;
}
