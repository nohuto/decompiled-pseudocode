/*
 * XREFs of sub_1409A2D68 @ 0x1409A2D68
 * Callers:
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 *     sub_1409A20D0 @ 0x1409A20D0 (sub_1409A20D0.c)
 *     sub_1409A216C @ 0x1409A216C (sub_1409A216C.c)
 *     sub_1409A21EC @ 0x1409A21EC (sub_1409A21EC.c)
 *     sub_1409A229C @ 0x1409A229C (sub_1409A229C.c)
 *     sub_1409A2EE4 @ 0x1409A2EE4 (sub_1409A2EE4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A233C @ 0x1409A233C (sub_1409A233C.c)
 *     sub_1409A23E0 @ 0x1409A23E0 (sub_1409A23E0.c)
 *     sub_1409A27E4 @ 0x1409A27E4 (sub_1409A27E4.c)
 *     sub_1409A295C @ 0x1409A295C (sub_1409A295C.c)
 *     sub_1409A6ED0 @ 0x1409A6ED0 (sub_1409A6ED0.c)
 */

__int64 __fastcall sub_1409A2D68(__int64 a1, int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int v13; // eax
  __int64 result; // rax

  if ( !byte_140D048E9 )
    byte_140D048E9 = sub_1409A295C(a1);
  *(_QWORD *)a1 = a2;
  v10 = &unk_140C08FC0;
  *(_QWORD *)(a1 + 8) = a3;
  v11 = 0;
  *(_DWORD *)(a1 + 16) = a4;
  while ( *v10 != a4 )
  {
    ++v11;
    v10 += 6;
    if ( v11 >= 6 )
    {
      v12 = 30000;
      goto LABEL_8;
    }
  }
  v12 = v10[4];
  if ( !v12 )
    goto LABEL_11;
LABEL_8:
  if ( (int)sub_1409A23E0(a1) >= 0 && *(_QWORD *)(a1 + 24) )
    sub_1409A233C(a1, *a2, v12, a5);
LABEL_11:
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  v13 = sub_1409A27E4(a4);
  sub_1409A6ED0(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), v13, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
