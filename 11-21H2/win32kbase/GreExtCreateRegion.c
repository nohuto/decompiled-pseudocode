/*
 * XREFs of GreExtCreateRegion @ 0x1C00311B0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0030EC0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0031EE0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x1C0031F70 (vConvertXformToMatrix.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0032610 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0032AD0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0097060 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

HRGN __fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct REGION *Region; // rax
  struct REGION *v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  struct _SLIST_ENTRY *v10; // rdi
  struct _SLIST_ENTRY *v11; // rsi
  HRGN v12; // rbx
  struct _SLIST_ENTRY *v14; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-99h] BYREF
  int v16; // [rsp+28h] [rbp-91h]
  PSLIST_ENTRY v17; // [rsp+30h] [rbp-89h] BYREF
  int v18; // [rsp+38h] [rbp-81h]
  int v19; // [rsp+3Ch] [rbp-7Dh]
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+48h] [rbp-71h]
  _BYTE v22[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-19h] BYREF
  int v25; // [rsp+C0h] [rbp+7h]
  __m128 v26; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v27; // [rsp+E0h] [rbp+27h]
  int v28; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  v16 = 0;
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  ListEntry = (PSLIST_ENTRY)Region;
  v7 = Region;
  if ( !Region )
  {
    v14 = 0LL;
    goto LABEL_42;
  }
  *((_DWORD *)Region + 20) = 16;
  *((_DWORD *)Region + 21) = 1;
  *((_QWORD *)Region + 12) = 0LL;
  *((_QWORD *)Region + 13) = 0LL;
  v8 = *((_QWORD *)Region + 11);
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0x80000000;
  *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
  *((_QWORD *)v7 + 5) = v8 + 16;
  *((_QWORD *)v7 + 3) = 112LL;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 7) = (char *)v7 + 48;
  *((_QWORD *)v7 + 6) = (char *)v7 + 48;
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&ListEntry, right, a3 + 2) )
  {
    v14 = ListEntry;
LABEL_42:
    REGION::vDeleteREGION(v14);
    v10 = 0LL;
    EngSetLastError(8u);
    goto LABEL_43;
  }
  if ( a1 )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&ListEntry) != 1 )
    {
      v26 = 0LL;
      v28 = 0;
      v27 = 0LL;
      vConvertXformToMatrix(a1, &v26);
      DWORD2(v27) *= 16;
      HIDWORD(v27) *= 16;
      v17 = (PSLIST_ENTRY)&v26;
      v19 = 0;
      v26 = _mm_mul_ps(v26, (__m128)_xmm);
      *((float *)&v27 + 1) = *((float *)&v27 + 1) * 16.0;
      *(float *)&v27 = *(float *)&v27 * 16.0;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v17, 8u);
      if ( (v28 & 0x43) != 0x43 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v22);
        if ( v23 )
        {
          v9 = RGNOBJ::bCreate((RGNOBJ *)&ListEntry, (struct EPATHOBJ *)v22, (struct EXFORMOBJ *)&v17);
          REGION::vDeleteREGION(ListEntry);
          v10 = 0LL;
          if ( v9 )
          {
            v21 = 0;
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v20, (struct EPATHOBJ *)v22, 1u, 0LL);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
            if ( !v20 )
            {
              EngSetLastError(8u);
              v12 = 0LL;
LABEL_21:
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
              goto LABEL_22;
            }
            v18 = 0;
            RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0x70u);
            v11 = v17;
            if ( v17 )
            {
              RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v17, (struct RGNOBJ *)&v20);
              RGNOBJ::vTighten((RGNOBJ *)&v17);
              v11 = v17;
              if ( ((((__int64)v17[6].Next & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
                && (((*((_DWORD *)&v17[6].Next + 3) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
                && (((*(_DWORD *)(&v17[6].Next + 1) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
                && (((HIDWORD(v17[6].Next) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
              {
                v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v17);
                if ( !v12 )
                {
                  REGION::vDeleteREGION(v11);
                  v11 = 0LL;
                }
                goto LABEL_19;
              }
              REGION::vDeleteREGION(v17);
              v11 = 0LL;
            }
            else
            {
              EngSetLastError(8u);
            }
            v12 = 0LL;
LABEL_19:
            if ( v18 == 1 )
              REGION::vDeleteREGION(v11);
            goto LABEL_21;
          }
        }
        else
        {
          EngSetLastError(8u);
          REGION::vDeleteREGION(ListEntry);
          v10 = 0LL;
        }
        v12 = 0LL;
LABEL_22:
        EPATHOBJ::vUnlock((EPATHOBJ *)v22);
        if ( v25 )
        {
          PopThreadGuardedObject(v24);
          v25 = 0;
        }
        goto LABEL_24;
      }
    }
  }
  RGNOBJ::vTighten((RGNOBJ *)&ListEntry);
  v10 = ListEntry;
  if ( ((((__int64)ListEntry[6].Next & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)&ListEntry[6].Next + 3) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*(_DWORD *)(&ListEntry[6].Next + 1) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((HIDWORD(ListEntry[6].Next) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&ListEntry);
    if ( !v12 )
    {
      REGION::vDeleteREGION(v10);
      v10 = 0LL;
    }
    goto LABEL_24;
  }
  REGION::vDeleteREGION(ListEntry);
  v10 = 0LL;
LABEL_43:
  v12 = 0LL;
LABEL_24:
  if ( v16 == 1 )
    REGION::vDeleteREGION(v10);
  return v12;
}
