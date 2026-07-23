/*
 * XREFs of sub_1408245C4 @ 0x1408245C4
 * Callers:
 *     PoFxRegisterDevice @ 0x140823470 (PoFxRegisterDevice.c)
 *     PoFxRegisterCoreDevice @ 0x140823860 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14098CDC0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_1408245C4(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // edx
  int *v7; // rax
  int v8; // ecx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 Pool2; // rax
  void *v14; // r8
  unsigned __int64 v15; // r11
  unsigned int v16; // esi
  __int64 v17; // r9
  __int64 i; // r10
  __int128 v19; // xmm0
  unsigned int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (int *)(a1 + 16);
    while ( 1 )
    {
      v8 = *v7;
      if ( !*v7 || v8 + v5 < v5 )
        break;
      ++v6;
      v7 += 8;
      v9 = v8 + v5;
      v5 += v8;
      if ( v6 >= (unsigned int)v3 )
      {
        if ( is_mul_ok(v3, 0x38uLL) )
        {
          v10 = (56 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v11 = 24LL * v9;
          if ( v11 <= 0xFFFFFFFF )
          {
            v12 = (unsigned int)v11 + v10;
            if ( v12 >= (unsigned int)v11 )
            {
              Pool2 = ExAllocatePool2(64LL, (unsigned int)v11 + v10, 1297630800LL);
              v14 = (void *)Pool2;
              if ( Pool2 )
              {
                v15 = v10 + Pool2;
                v16 = 0;
                if ( (_DWORD)v3 )
                {
                  v17 = a1 + 16;
                  for ( i = Pool2 + 28; ; i += 56LL )
                  {
                    v19 = *(_OWORD *)(v17 - 16);
                    *(_QWORD *)(i - 12) = 0LL;
                    v20 = 0;
                    *(_OWORD *)(i - 28) = v19;
                    *(_DWORD *)i = *(_DWORD *)v17;
                    *(_QWORD *)(i + 4) = v15;
                    *(_DWORD *)(i - 4) = *(_DWORD *)(v17 + 4);
                    if ( *(_DWORD *)v17 )
                      break;
LABEL_15:
                    ++v16;
                    v17 += 32LL;
                    if ( v16 >= (unsigned int)v3 )
                      return v14;
                  }
                  while ( v15 - (unsigned __int64)v14 <= v12 - 24 )
                  {
                    v21 = *(_QWORD *)(v17 + 8);
                    v22 = v20++;
                    *(_DWORD *)(v15 + 16) = *(_DWORD *)(v21 + 24 * v22 + 16);
                    *(_QWORD *)v15 = *(_QWORD *)(v21 + 24 * v22);
                    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v21 + 24 * v22 + 8);
                    v15 += 24LL;
                    if ( v20 >= *(_DWORD *)v17 )
                      goto LABEL_15;
                  }
                  ExFreePoolWithTag(v14, 0x4D584650u);
                }
                else
                {
                  return v14;
                }
              }
            }
          }
        }
        return (void *)v2;
      }
    }
  }
  return (void *)v2;
}
