/*
 * XREFs of MiPurgeImageSection @ 0x14036A5D8
 * Callers:
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 * Callees:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1402DE264 (MiLockProtoPoolPageForce.c)
 *     MiInvalidateCollidedIos @ 0x140330380 (MiInvalidateCollidedIos.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int v9; // r8d
  ULONG_PTR v10; // r12
  __int64 v11; // r13
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // r15d
  __int64 v22; // r8
  int v23; // edx
  bool v24; // zf
  __int64 v25; // rbx
  int v26; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  ULONG_PTR v31; // [rsp+48h] [rbp-50h]
  unsigned __int8 v33; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+18h]
  unsigned int v35; // [rsp+B8h] [rbp+20h]

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v33 = 17;
  v3 = a1;
  v28 = 0LL;
  v4 = *(_QWORD *)(qword_140C673C8 + 8 * v2);
  v27 = v4;
  while ( 1 )
  {
    v29 = v1;
    if ( !v1 )
      break;
    if ( (*(_WORD *)(v1 + 34) & 2) == 0 )
      goto LABEL_4;
    v6 = MiSwizzleInvalidPte(16LL * (*(_WORD *)(v1 + 32) & 0x3E));
    v8 = v6;
    v35 = 0;
    v34 = 0;
    if ( *(_DWORD *)(v1 + 36) )
    {
      v8 = MiSwizzleInvalidPte(16 * (v5 | (v1 << 12) | 0x40));
      v35 = (*(_DWORD *)(v1 + 40) << 9) | (v9 >> 4);
    }
    v10 = *(_QWORD *)(v1 + 8);
    v31 = v10 + 8LL * *(unsigned int *)(v1 + 44);
    if ( v10 < v31 )
    {
      v11 = v28;
      while ( 1 )
      {
        if ( (v10 & 0xFFF) == 0 || !v11 )
        {
          if ( v11 )
            MiUnlockProtoPoolPage(v11, v33);
          v11 = MiLockProtoPoolPageForce(v10, &v33);
        }
        v12 = MiLockLeafPage((unsigned __int64 *)v10, 0LL);
        v13 = MI_READ_PTE_LOCK_FREE(v10);
        v15 = v13;
        if ( !v13 )
        {
LABEL_20:
          v28 = v11;
          v7 = v11;
          v1 = v29;
          break;
        }
        if ( v12 )
        {
          v16 = (_DWORD *)(v12 + 16);
          if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 || (*v16 & 0x400LL) == 0 )
          {
            if ( (*v16 & 0x400LL) != 0 )
              MiDereferenceControlAreaPfnList(v3, 0LL, v14, 2);
            v17 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFLL;
            v28 = 0LL;
            v18 = 0LL;
            v30 = v17;
            if ( *(_WORD *)(v12 + 32) )
            {
              *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
              if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
              {
                v19 = *(_QWORD *)v12 - 32LL;
                if ( *(_QWORD *)(v19 + 16) == v19 + 16 )
                  v19 = 0LL;
                v28 = v19;
              }
              if ( (*v16 & 0x400LL) == 0 )
                MiChargeCommit(v27, 1uLL, 4uLL);
            }
            else
            {
              MiUnlinkPageFromListEx(v12, 0LL);
              if ( (*v16 & 0x400LL) == 0 )
                v18 = MiCapturePageFileInfoInline((unsigned __int64 *)(v12 + 16), 0, 1);
              if ( qword_140C65B40 )
              {
                if ( (v15 & 0x10) != 0 )
                  v15 &= ~0x10uLL;
                else
                  v15 &= ~qword_140C65B40;
              }
              MiInsertPageInFreeOrZeroedList((v15 >> 12) & 0xFFFFFFFFFFLL, 2);
            }
            v20 = v8;
            v21 = 0;
            if ( MiPteInShadowRange(v10) )
            {
              if ( MiPteHasShadow() )
              {
                v21 = v23 + 1;
                if ( HIBYTE(word_140C66CFC) == (_BYTE)v23 )
                {
                  v24 = ((unsigned __int8)v8 & (unsigned __int8)v21) == 0;
LABEL_49:
                  if ( !v24 )
                    v20 = v8 | 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v24 = (v8 & 1) == 0;
                goto LABEL_49;
              }
            }
            *(_QWORD *)v10 = v20;
            if ( v21 )
              MiWritePteShadow(v10, v20, v22);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v28 )
              MiInvalidateCollidedIos(v28);
            v25 = 48 * v30 - 0x220000000000LL;
            v26 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v26);
              while ( *(__int64 *)(v25 + 24) < 0 );
            }
            MiDecrementShareCount(v25);
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v4 = v27;
            if ( v18 )
              MiReleasePageFileInfo(v27, v18, 1);
            v3 = a1;
            goto LABEL_17;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v4 = v27;
        }
        else if ( (v13 & 0x400) == 0 && v13 != MiSwizzleInvalidPte(768LL) )
        {
          MiReleasePageFileSpace(v4, v15, 1);
          *(_QWORD *)v10 = v8;
        }
LABEL_17:
        v10 += 8LL;
        v34 += 4096;
        if ( v34 >= v35 )
          v8 = v6;
        if ( v10 >= v31 )
          goto LABEL_20;
      }
    }
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v33);
      v28 = 0LL;
    }
LABEL_4:
    v1 = *(_QWORD *)(v1 + 16);
  }
}
