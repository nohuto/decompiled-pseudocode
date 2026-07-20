/*
 * XREFs of ApiSetResolveToHost_V7 @ 0x140012034
 * Callers:
 *     SmpProcessModuleImports @ 0x140007570 (SmpProcessModuleImports.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1400122E4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140012374 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x140012434 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetResolveToHost_V7(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, _OWORD *a5)
{
  __int64 v5; // r15
  char v10; // r14
  int v11; // edx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r11d
  unsigned __int16 v18; // r9
  char v19; // r8
  unsigned int v20; // eax
  unsigned __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // r9d
  _WORD *v25; // rdx
  _WORD *v26; // rdx
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rdx
  unsigned int *v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 result; // rax
  int v35; // [rsp+20h] [rbp-48h]
  char v36; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v37; // [rsp+88h] [rbp+20h] BYREF

  v5 = (__int64)a5;
  v10 = 0;
  *a5 = 0LL;
  v11 = *a2;
  if ( (unsigned __int16)v11 >= 8u )
  {
    v12 = (_QWORD *)*((_QWORD *)a2 + 1);
    v13 = *v12 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v13 == 0x2D004900500041LL || v13 == 0x2D005400580045LL )
    {
      LOWORD(v11) = (unsigned __int16)v11 >> 1;
      if ( (unsigned __int8)ApiSetpGetSearchKeyInfo_V7((_DWORD)v12, v11, a3, (unsigned int)&v37, (__int64)&v36) )
      {
        if ( v36 )
        {
          v14 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 40, v12, v37);
          if ( v14 == -1 )
            goto LABEL_25;
          v15 = a1
              + v14 * (unsigned __int64)*(unsigned __int8 *)(a1 + 50)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 40);
          v16 = *(unsigned int *)(v15 + 12);
          v17 = *(_DWORD *)(v15 + 16);
          v18 = *(_WORD *)(v15 + 20);
          v19 = *(_BYTE *)(v15 + 22);
          goto LABEL_19;
        }
        v20 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v12, v37);
        if ( v20 != -1 )
        {
          v21 = a1
              + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 62)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 52);
          v19 = *(_BYTE *)(v21 + 19);
          if ( (v19 & 4) == 0 )
            goto LABEL_18;
          v22 = 0;
          v23 = 2 * v37;
          v24 = (*a2 - v23) >> 1;
          if ( v24 )
          {
            v25 = (_WORD *)(*((_QWORD *)a2 + 1) + v23);
            if ( *v25 == 45 )
            {
              v26 = v25 + 1;
              v27 = v24 - 1;
              if ( v27 )
              {
                while ( v27 > 0 )
                {
                  if ( (unsigned __int16)(*v26 - 48) > 9u )
                    goto LABEL_25;
                  v28 = (unsigned __int16)*v26++;
                  --v27;
                  v22 = v28 + 2 * (5 * v22 - 24);
                }
                if ( v22 <= *(unsigned __int8 *)(v21 + 18) )
                {
LABEL_18:
                  v16 = *(unsigned int *)(v21 + 8);
                  v17 = *(_DWORD *)(v21 + 12);
                  v18 = *(_WORD *)(v21 + 16);
LABEL_19:
                  v10 = 1;
                  if ( (v19 & 2) != 0 )
                  {
                    v29 = *(unsigned __int16 *)(a1 + 6);
                    v30 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 76) + v16 * *(unsigned __int8 *)(a1 + 86) - v29);
                    if ( *((_BYTE *)v30 + 8) <= *(_BYTE *)(a1 + 3) )
                    {
                      *(_QWORD *)(v5 + 8) = a1 + *v30 + (unsigned __int64)*(unsigned int *)(a1 + 16) - v29;
                      *(_WORD *)(v5 + 2) = 2 * *((_WORD *)v30 + 2);
                      *(_WORD *)v5 = 2 * *((_WORD *)v30 + 2);
                      if ( a3 )
                      {
                        if ( v18 )
                        {
                          LOWORD(v35) = *(_WORD *)a3 >> 1;
                          v31 = ApiSetpSearchForHostOverrideIndex_V7(a1, v17, v18, *(_QWORD *)(a3 + 8), v35);
                          if ( v31 != -1 )
                          {
                            v32 = *(unsigned __int16 *)(a1 + 6);
                            v33 = *(unsigned int *)(a1 + 88)
                                + v31 * (unsigned __int64)*(unsigned __int16 *)(a1 + 98)
                                - v32;
                            *(_QWORD *)(v5 + 8) = a1
                                                + *(unsigned int *)(a1 + 16)
                                                + (unsigned __int64)*(unsigned int *)(v33 + a1 + 8)
                                                - v32;
                            *(_WORD *)(v5 + 2) = 2 * *(_WORD *)(v33 + a1 + 14);
                            *(_WORD *)v5 = 2 * *(_WORD *)(v33 + a1 + 14);
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
  result = 0LL;
  *a4 = v10;
  return result;
}
