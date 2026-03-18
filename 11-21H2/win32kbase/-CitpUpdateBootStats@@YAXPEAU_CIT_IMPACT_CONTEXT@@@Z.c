/*
 * XREFs of ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A31F4
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00A2FE8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C00A3AFC (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0017404 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2F10 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00A3364 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00A4900 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 */

void __fastcall CitpUpdateBootStats(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  ULONG v3; // eax
  unsigned __int8 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // cx
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  __int16 v18; // dx
  void *v19; // [rsp+20h] [rbp-18h]
  unsigned __int16 v20; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = 0;
  LODWORD(v2) = 0;
  v21 = 0;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v3 = RtlLengthSid(*((PSID *)a1 + 12));
    v4 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v2 = 314159LL;
    v5 = v3;
    if ( v3 >= 8uLL )
    {
      v6 = (unsigned __int64)v3 >> 3;
      v5 = v3 - 8 * v6;
      do
      {
        v7 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v2))))));
        v8 = v4[7];
        v4 += 8;
        v2 = v8 + 37 * v7;
        --v6;
      }
      while ( v6 );
    }
    if ( v5 >= 1 && v5 <= 7 )
    {
      v12 = v5 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_9;
                  LODWORD(v2) = *v4++ + 37 * v2;
                }
                LODWORD(v2) = *v4++ + 37 * v2;
              }
              LODWORD(v2) = *v4++ + 37 * v2;
            }
            LODWORD(v2) = *v4++ + 37 * v2;
          }
          LODWORD(v2) = *v4++ + 37 * v2;
        }
        LODWORD(v2) = *v4++ + 37 * v2;
      }
      LODWORD(v2) = *v4 + 37 * v2;
    }
  }
LABEL_9:
  if ( (int)CitpUpdateActiveBootId(v2, 1u, &v21, &v20, v19) >= 0 )
  {
    v9 = v20;
    if ( v20 )
    {
      v10 = *((_WORD *)a1 + 182);
      if ( !v10 || v10 > v20 )
        *((_WORD *)a1 + 182) = v20;
      v11 = *((_WORD *)a1 + 183);
      if ( !v11 || v11 < v9 )
        *((_WORD *)a1 + 183) = v9;
      if ( v21 )
      {
        if ( v21 != v9 )
        {
          CitpStatIncrement((unsigned __int16 *)a1 + 171, 1);
          CitpStatIncrement((unsigned __int16 *)a1 + 299, v18);
          CitpPostUpdateUseInfoSave(a1, 0LL);
          CitpDPDataSave(a1);
        }
      }
    }
  }
}
