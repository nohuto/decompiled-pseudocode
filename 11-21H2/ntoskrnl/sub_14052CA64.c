/*
 * XREFs of sub_14052CA64 @ 0x14052CA64
 * Callers:
 *     sub_140522324 @ 0x140522324 (sub_140522324.c)
 *     sub_14052CE20 @ 0x14052CE20 (sub_14052CE20.c)
 * Callees:
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_14052CB98 @ 0x14052CB98 (sub_14052CB98.c)
 *     sub_14052CC08 @ 0x14052CC08 (sub_14052CC08.c)
 */

__int64 __fastcall sub_14052CA64(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v4; // edi
  char v6; // bp
  __int64 v8; // rcx
  unsigned __int8 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax

  v4 = 0;
  v6 = a2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int8)(a3 - 1) > 2u )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = (unsigned int)a3 - 1;
  v9 = 1 << (a3 - 1);
  LOBYTE(v8) = a2;
  LOBYTE(a2) = v9;
  v10 = sub_14052CB98(v8, a2);
  LOBYTE(v11) = v6;
  v12 = v10;
  v13 = sub_14052CC08(v11);
  v15 = v13;
  if ( !v12 || !v13 )
    return (unsigned int)-1073741811;
  if ( v6 )
  {
    if ( v6 == v14 )
    {
      v16 = a1;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v16 = sub_1403BE7F0(a1, v9, 0);
  if ( v16 )
  {
LABEL_11:
    *(_DWORD *)(a4 + 10) = 0;
    *(_WORD *)(a4 + 14) = 0;
    *(_QWORD *)a4 = a1;
    *(_BYTE *)(a4 + 8) = v6;
    *(_BYTE *)(a4 + 9) = v9;
    *(_QWORD *)(a4 + 16) = v16;
    *(_QWORD *)(a4 + 24) = v12;
    *(_QWORD *)(a4 + 32) = v15;
    return v4;
  }
  return (unsigned int)-1073741670;
}
