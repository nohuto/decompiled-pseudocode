/*
 * XREFs of sub_1409704A0 @ 0x1409704A0
 * Callers:
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_14059E1E8 @ 0x14059E1E8 (sub_14059E1E8.c)
 *     sub_14059E7F0 @ 0x14059E7F0 (sub_14059E7F0.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 */

__int64 __fastcall sub_1409704A0(__int64 *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // esi
  unsigned __int64 v6; // r13
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rbp
  __int64 v9; // rbx
  char v11; // r12
  int v13; // eax
  ULONG_PTR v14; // r12
  unsigned __int16 *v15; // rax
  int v16; // r8d
  ULONG_PTR v17; // [rsp+30h] [rbp-68h] BYREF
  ULONG_PTR v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+54h] [rbp-44h]
  __int64 *v22; // [rsp+A0h] [rbp+8h]
  __int64 v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v22 = a1;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v11 = a3;
  while ( 1 )
  {
    if ( v9 == a5 )
    {
      if ( !v7 )
        return (unsigned int)v5;
    }
    else
    {
      if ( !v7 )
      {
        v8 = *(_QWORD *)(a4 + 8 * v9);
        v7 = 1LL;
        goto LABEL_27;
      }
      if ( *(_QWORD *)(a4 + 8 * v9 - 8) + 1LL == *(_QWORD *)(a4 + 8 * v9) )
      {
        ++v7;
        goto LABEL_27;
      }
      a1 = v22;
    }
    if ( v8 == 0x8000000000000000uLL )
      break;
    if ( (v8 & 0x4000000000000000LL) == 0 )
    {
      if ( v5 < 0 )
      {
        if ( a4 + 8 * v9 <= v6 )
        {
          if ( (v11 & 0x40) != 0 )
            sub_14059E1E8(v8, v7);
          sub_140969850(v8, v7, 0x22u);
        }
      }
      else
      {
        v21 = 0;
        v13 = 2;
        v19[0] = a1;
        if ( (v11 & 0x40) != 0 )
          v13 = 6;
        v14 = v9 - v7;
        v20 = v13;
        v17 = v7 << 12;
        v19[1] = a2 + 8 * (v9 - v7);
        v18 = v8 << 12;
        v15 = (unsigned __int16 *)sub_14030EC14(*a1);
        v5 = sub_140968388(v15, (__int64 *)&v18, (__int64 *)&v17, (unsigned int)(v16 - 4), (__int64)v19);
        if ( v5 < 0 )
        {
          v7 = 0LL;
          v6 = a4 + 8 * v14;
          v9 = -1LL;
          goto LABEL_27;
        }
      }
    }
LABEL_25:
    if ( v9 == a5 )
      return (unsigned int)v5;
    v7 = 0LL;
    --v9;
LABEL_27:
    if ( ++v9 > a5 )
      return (unsigned int)v5;
    v11 = a3;
    a1 = v22;
    a2 = v23;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  sub_14059E7F0((__int64)a1, (unsigned __int64 *)(a2 + 8 * (v9 - v7)));
  if ( (v11 & 2) == 0 )
    goto LABEL_25;
  return (unsigned int)-1073740023;
}
