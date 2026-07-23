/*
 * XREFs of sub_1406FAEA0 @ 0x1406FAEA0
 * Callers:
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14023C5D4 @ 0x14023C5D4 (sub_14023C5D4.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_1407DBC0C @ 0x1407DBC0C (sub_1407DBC0C.c)
 *     sub_1407DBF54 @ 0x1407DBF54 (sub_1407DBF54.c)
 */

void __fastcall sub_1406FAEA0(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  int v7; // eax
  char v8; // r8
  int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v10 = *((_QWORD *)KeGetCurrentThread() + 23);
    v11 = *(_DWORD *)(a2 + 512);
    if ( *(_DWORD *)(v10 + 1524) == v11 )
      v12 = (*(_DWORD *)(v10 + 1124) & 0x4000) == 0;
    else
      v12 = (unsigned int)sub_1407DBF54(v11) == 0;
    if ( v12 )
      goto LABEL_13;
    v13 = sub_14027A1B4(a2);
    v14 = *(_QWORD *)(v13 + 24);
    sub_140230680((signed __int64 *)(a2 + 96), v13, 0x63536343u);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      v15 = 1LL;
    if ( !(unsigned int)sub_1407DBC0C(*(unsigned int *)(a2 + 512), v14, v15) )
    {
LABEL_13:
      sub_14023C5D4(a2, 0x200000, 0);
      goto LABEL_4;
    }
    goto LABEL_19;
  }
LABEL_4:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  sub_140335870(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( (v9 & 2) == 0 )
    *(_QWORD *)a1 = 0LL;
}
