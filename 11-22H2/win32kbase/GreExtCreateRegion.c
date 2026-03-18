/*
 * XREFs of GreExtCreateRegion @ 0x1C007C890
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C007C780 (NtGdiExtCreateRegion.c)
 * Callees:
 *     vConvertXformToMatrix @ 0x1C0001B20 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0039770 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007D19C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C007E640 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0152CD0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154170 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0156700 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0157418 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0157530 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

HRGN __fastcall GreExtCreateRegion(float *a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  __int64 v6; // rsi
  PVOID v7; // rcx
  _DWORD *v8; // rbx
  HRGN v9; // rdi
  HRGN v10; // rdi
  int v12; // edi
  PVOID Entry; // [rsp+20h] [rbp-99h] BYREF
  PVOID v14; // [rsp+28h] [rbp-91h] BYREF
  PVOID v15; // [rsp+30h] [rbp-89h] BYREF
  __m128 *v16; // [rsp+38h] [rbp-81h] BYREF
  int v17; // [rsp+44h] [rbp-75h]
  _BYTE v18[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h]
  _QWORD v20[4]; // [rsp+A0h] [rbp-19h] BYREF
  int v21; // [rsp+C0h] [rbp+7h]
  __m128 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+27h]
  int v24; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left == 32 && right <= 0xFFFFFFD && 16 * (right + 2) <= a2 )
  {
    v6 = 0LL;
    Entry = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    v7 = Entry;
    if ( Entry )
    {
      if ( (unsigned int)RGNOBJ::bSet((RGNOBJ *)&Entry, right, a3 + 2) )
      {
        v8 = Entry;
        if ( !a1
          || (v16 = (__m128 *)(((unsigned __int64)Entry + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)Entry >> 64)),
              (unsigned int)RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v16) == 1) )
        {
          RGNOBJ::vTighten((RGNOBJ *)&Entry);
          if ( (((v8[14] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[17] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[16] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v8[15] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
          {
            REGION::vDeleteREGION((unsigned __int64)v8);
            return 0LL;
          }
          else
          {
            v9 = RGNOBJ::hrgnAssociate((RGNOBJ *)&Entry);
            if ( !v9 )
              REGION::vDeleteREGION((unsigned __int64)v8);
          }
          return v9;
        }
        v22 = 0LL;
        v24 = 0;
        v23 = 0LL;
        vConvertXformToMatrix(a1, v22.m128_f32);
        DWORD2(v23) *= 16;
        HIDWORD(v23) *= 16;
        v16 = &v22;
        v17 = 0;
        v22 = _mm_mul_ps(v22, (__m128)_xmm);
        *((float *)&v23 + 1) = *((float *)&v23 + 1) * 16.0;
        *(float *)&v23 = *(float *)&v23 * 16.0;
        EXFORMOBJ::vComputeAccelFlags((float **)&v16, 8);
        if ( (v24 & 0x43) == 0x43 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&Entry);
          if ( ((v8[14] & 0xF8000000) == 0 || (v8[14] & 0xF8000000) == -134217728)
            && ((v8[17] & 0xF8000000) == 0 || (v8[17] & 0xF8000000) == -134217728)
            && ((v8[16] & 0xF8000000) == 0 || (v8[16] & 0xF8000000) == -134217728)
            && ((v8[15] & 0xF8000000) == 0 || (v8[15] & 0xF8000000) == -134217728) )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&Entry);
            if ( !v10 )
              REGION::vDeleteREGION((unsigned __int64)v8);
            return v10;
          }
          REGION::vDeleteREGION((unsigned __int64)v8);
          return (HRGN)v6;
        }
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
        if ( !v19 )
        {
          EngSetLastError(8u);
          REGION::vDeleteREGION((unsigned __int64)v8);
LABEL_31:
          v10 = 0LL;
          goto LABEL_45;
        }
        v12 = RGNOBJ::bCreate((RGNOBJ *)&Entry, (struct EPATHOBJ *)v18, (struct EXFORMOBJ *)&v16);
        REGION::vDeleteREGION((unsigned __int64)v8);
        if ( !v12 )
          goto LABEL_31;
        v15 = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
        if ( v15 && (v14 = 0LL, RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u), v14) )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v14, (struct RGNOBJ *)&v15);
          RGNOBJ::vTighten((RGNOBJ *)&v14);
          if ( ((*((_DWORD *)v14 + 14) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 14) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 17) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 17) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 16) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 16) & 0xF8000000) == -134217728)
            && ((*((_DWORD *)v14 + 15) & 0xF8000000) == 0 || (*((_DWORD *)v14 + 15) & 0xF8000000) == -134217728) )
          {
            v10 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
            if ( !v10 )
            {
              REGION::vDeleteREGION((unsigned __int64)v14);
              v14 = 0LL;
            }
            goto LABEL_44;
          }
          REGION::vDeleteREGION((unsigned __int64)v14);
          v14 = 0LL;
        }
        else
        {
          EngSetLastError(8u);
        }
        v10 = 0LL;
LABEL_44:
        RGNMEMOBJTMP::~RGNMEMOBJTMP(&v15);
LABEL_45:
        EPATHOBJ::vUnlock((EPATHOBJ *)v18);
        if ( v21 )
          PopThreadGuardedObject(v20);
        return v10;
      }
      v7 = Entry;
    }
    REGION::vDeleteREGION((unsigned __int64)v7);
    EngSetLastError(8u);
    return (HRGN)v6;
  }
  return 0LL;
}
