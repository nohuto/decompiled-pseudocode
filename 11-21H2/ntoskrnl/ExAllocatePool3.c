/*
 * XREFs of ExAllocatePool3 @ 0x140A6E1B0
 * Callers:
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_1403DA43C @ 0x1403DA43C (sub_1403DA43C.c)
 *     sub_14056D8FC @ 0x14056D8FC (sub_14056D8FC.c)
 *     sub_140675814 @ 0x140675814 (sub_140675814.c)
 *     sub_1407112A4 @ 0x1407112A4 (sub_1407112A4.c)
 *     sub_1407D57AC @ 0x1407D57AC (sub_1407D57AC.c)
 *     sub_140A59068 @ 0x140A59068 (sub_140A59068.c)
 *     sub_140A7FD04 @ 0x140A7FD04 (sub_140A7FD04.c)
 *     sub_140A901D0 @ 0x140A901D0 (sub_140A901D0.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A90E38 @ 0x140A90E38 (sub_140A90E38.c)
 *     sub_140A967D0 @ 0x140A967D0 (sub_140A967D0.c)
 *     sub_140A9697C @ 0x140A9697C (sub_140A9697C.c)
 *     sub_140A9DD9C @ 0x140A9DD9C (sub_140A9DD9C.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_14034BAE0 @ 0x14034BAE0 (sub_14034BAE0.c)
 *     sub_14054F578 @ 0x14054F578 (sub_14054F578.c)
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 */

__int64 __fastcall ExAllocatePool3(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  char v6; // r15
  int v10; // esi
  __int64 v11; // r14
  char v12; // dl
  char v13; // r8
  __int64 v14; // rax
  int v15; // r9d
  int v16; // ecx
  POOL_TYPE v17; // ebp
  unsigned int v18; // r10d
  int *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  POOL_TYPE v25; // ecx
  NTSTATUS v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  struct _MDL *v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // [rsp+48h] [rbp-30h] BYREF

  v5 = 0LL;
  v6 = 0;
  v33 = 0LL;
  v10 = 16;
  LODWORD(v11) = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) | 0x80000000;
  if ( a3 )
  {
    v12 = 0;
    v13 = 0;
    if ( (a1 & 0xFFFFF810) == 0 )
    {
      v14 = a1 & 0x1C0;
      switch ( v14 )
      {
        case 64LL:
          v15 = 512;
LABEL_5:
          if ( (a1 & 4) != 0 )
            v15 |= 0x20u;
          v16 = v15 | 0x400;
          if ( (a1 & 2) != 0 )
            v16 = v15;
          v17 = v16;
          if ( (a1 & 0x100000629LL) != 0 )
          {
            if ( (a1 & 8) != 0 )
              v17 = v16 | 4;
            if ( (a1 & 0x200) != 0 )
              v17 |= 0x80u;
            if ( (a1 & 0x400) != 0 )
              v17 |= 0x40u;
            v25 = v17;
            if ( (a1 & 1) != 0 )
            {
              v17 |= 8u;
              v12 = 1;
              if ( (a1 & 0x20) != 0 )
                v17 = v25;
            }
            else if ( (a1 & 0x20) != 0 )
            {
              v17 |= 0x10u;
            }
            if ( (a1 & 0x100000000LL) != 0 )
              v13 = 1;
          }
          v18 = 0;
          if ( !a5 )
          {
LABEL_20:
            if ( v13 )
            {
              v22 = 1;
              v10 |= 8u;
            }
            else
            {
              v22 = 0;
            }
            if ( v12 )
            {
              v23 = sub_140A6E9A4((unsigned int)v17, a2, a3, (unsigned int)v11);
            }
            else if ( v6 )
            {
              if ( v10 != 32 && !(unsigned int)sub_14034BAE0(v17, a2, v10) && a2 > 0xFE0 )
                goto LABEL_73;
              if ( (v10 & 8) != 0 )
                LODWORD(v5) = 1;
              v23 = sub_140349710(v17, a2, a3, v11, v5);
            }
            else
            {
              v23 = sub_140349710(v17, a2, a3, v11, v22);
            }
            v5 = v23;
            if ( !v23 )
              goto LABEL_73;
            return v5;
          }
          v19 = (int *)(a4 + 8);
          while ( 1 )
          {
            v20 = *((_QWORD *)v19 - 1);
            switch ( (unsigned __int8)v20 )
            {
              case 1u:
                if ( v12 )
                {
                  if ( (v20 & 0x100) == 0 )
                    goto LABEL_51;
                }
                else
                {
                  v10 = *v19;
                  if ( (*v19 & 0xFFFFFFCF) != 0 || v10 == 48 )
                    goto LABEL_51;
                  v6 = 1;
                }
                break;
              case 2u:
                if ( a1 != 64 )
                  goto LABEL_51;
                v21 = *(_QWORD *)v19;
                v33 = v21;
                if ( !v21 || a5 != 1 )
                  goto LABEL_51;
                goto LABEL_18;
              case 3u:
                v11 = (unsigned int)*v19;
                if ( (*v19 & 0x7FFFFFFFu) > (unsigned __int16)word_140D05000
                  || v11 != *(_QWORD *)v19
                  || (a1 & 0x40) == 0 )
                {
                  goto LABEL_51;
                }
                break;
              default:
                if ( (v20 & 0x100) == 0 )
                  goto LABEL_51;
                break;
            }
            v21 = v33;
LABEL_18:
            ++v18;
            v19 += 4;
            if ( v18 >= a5 )
            {
              if ( !v21 )
                goto LABEL_20;
              v27 = *(_DWORD *)(v21 + 24);
              v28 = *(_QWORD *)(v21 + 16);
              v29 = *(struct _MDL **)(v21 + 8);
              v30 = *(_QWORD *)v21;
              v33 = 0LL;
              if ( !a2 || !v29 || !v30 )
                goto LABEL_73;
              v31 = sub_14054F578(v30, a3, a2, v29, v28, v27, &v33);
              v32 = v33;
              if ( v31 < 0 )
                v32 = 0LL;
              v5 = v32;
              if ( !v32 )
              {
LABEL_73:
                v26 = -1073741670;
                goto LABEL_74;
              }
              return v5;
            }
          }
        case 128LL:
          v15 = 0;
          goto LABEL_5;
        case 256LL:
          v15 = 1;
          if ( (a1 & 0x10) != 0 )
            v15 = -2147483647;
          goto LABEL_5;
      }
    }
  }
LABEL_51:
  v26 = -1073741811;
LABEL_74:
  if ( (a1 & 0x20) != 0 )
    RtlRaiseStatus(v26);
  return v5;
}
