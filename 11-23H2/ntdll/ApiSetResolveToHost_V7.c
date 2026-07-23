/*
 * XREFs of ApiSetResolveToHost_V7 @ 0x18009EE48
 * Callers:
 *     ApiSetResolveToHost @ 0x180019BC0 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x18009F0FC (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x18009F18C (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18009F24C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetResolveToHost_V7(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, _OWORD *a5)
{
  __int64 v5; // r12
  char v8; // r15
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned __int16 v16; // r9
  char v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _WORD *v22; // rdx
  _WORD *v23; // rdx
  signed int v24; // r9d
  int v25; // eax
  __int64 v26; // rdx
  unsigned int *v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-48h]
  unsigned __int16 v33; // [rsp+30h] [rbp-38h] BYREF
  char v34; // [rsp+78h] [rbp+10h] BYREF
  char *v35; // [rsp+88h] [rbp+20h]

  v35 = a4;
  v5 = (__int64)a5;
  v8 = 0;
  *a5 = 0LL;
  v9 = *a2;
  if ( v9 >= 8 )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      if ( (unsigned __int8)ApiSetpGetSearchKeyInfo_V7(
                              (_DWORD)v10,
                              (unsigned __int16)v9 >> 1,
                              a3,
                              (unsigned int)&v33,
                              (__int64)&v34) )
      {
        if ( v34 )
        {
          v12 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 40, v10, v33);
          if ( v12 == -1 )
            goto LABEL_25;
          v13 = a1
              + v12 * (unsigned __int64)*(unsigned __int8 *)(a1 + 50)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 40);
          v14 = *(unsigned int *)(v13 + 12);
          v15 = *(_DWORD *)(v13 + 16);
          v16 = *(_WORD *)(v13 + 20);
          v17 = *(_BYTE *)(v13 + 22);
          goto LABEL_19;
        }
        v18 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v10, v33);
        if ( v18 != -1 )
        {
          v19 = a1
              + v18 * (unsigned __int64)*(unsigned __int8 *)(a1 + 62)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 52);
          v17 = *(_BYTE *)(v19 + 19);
          if ( (v17 & 4) == 0 )
            goto LABEL_18;
          v20 = 2 * v33;
          v21 = 0;
          if ( (v9 - v20) >> 1 )
          {
            v22 = (_WORD *)((char *)v10 + v20);
            if ( *v22 == 45 )
            {
              v23 = v22 + 1;
              v24 = ((v9 - v20) >> 1) - 1;
              if ( (v9 - v20) >> 1 != 1 )
              {
                while ( v24 > 0 )
                {
                  if ( (unsigned __int16)(*v23 - 48) > 9u )
                    goto LABEL_25;
                  v25 = (unsigned __int16)*v23++;
                  --v24;
                  v21 = v25 + 2 * (5 * v21 - 24);
                }
                if ( v21 <= *(unsigned __int8 *)(v19 + 18) )
                {
LABEL_18:
                  v14 = *(unsigned int *)(v19 + 8);
                  v15 = *(_DWORD *)(v19 + 12);
                  v16 = *(_WORD *)(v19 + 16);
LABEL_19:
                  v8 = 1;
                  if ( (v17 & 2) != 0 )
                  {
                    v26 = *(unsigned __int16 *)(a1 + 6);
                    v27 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 76) + v14 * *(unsigned __int8 *)(a1 + 86) - v26);
                    if ( *((_BYTE *)v27 + 8) <= *(_BYTE *)(a1 + 3) )
                    {
                      *(_QWORD *)(v5 + 8) = a1 + *v27 + (unsigned __int64)*(unsigned int *)(a1 + 16) - v26;
                      *(_WORD *)(v5 + 2) = 2 * *((_WORD *)v27 + 2);
                      *(_WORD *)v5 = 2 * *((_WORD *)v27 + 2);
                      if ( a3 )
                      {
                        if ( v16 )
                        {
                          LOWORD(v32) = *(_WORD *)a3 >> 1;
                          v28 = ApiSetpSearchForHostOverrideIndex_V7(a1, v15, v16, *(_QWORD *)(a3 + 8), v32);
                          if ( v28 != -1 )
                          {
                            v29 = *(unsigned __int16 *)(a1 + 6);
                            v30 = *(unsigned int *)(a1 + 88)
                                + v28 * (unsigned __int64)*(unsigned __int16 *)(a1 + 98)
                                - v29;
                            *(_QWORD *)(v5 + 8) = a1
                                                + *(unsigned int *)(a1 + 16)
                                                + (unsigned __int64)*(unsigned int *)(v30 + a1 + 8)
                                                - v29;
                            *(_WORD *)(v5 + 2) = 2 * *(_WORD *)(v30 + a1 + 14);
                            *(_WORD *)v5 = 2 * *(_WORD *)(v30 + a1 + 14);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_25:
  *v35 = v8;
  return 0LL;
}
