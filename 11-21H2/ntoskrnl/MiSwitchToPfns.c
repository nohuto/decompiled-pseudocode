/*
 * XREFs of MiSwitchToPfns @ 0x140AF522C
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140653C40 (HvlChangeIsolatedMemoryVisibility.c)
 *     MiCreateFreePfns @ 0x140AF5384 (MiCreateFreePfns.c)
 *     MiCreateDescriptorPfns @ 0x140AF5940 (MiCreateDescriptorPfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _OWORD v18[3]; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v19[3]; // [rsp+60h] [rbp+27h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+67h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  MiCreatePfnTemplate((__int64)v19, 128, 0);
  MiCreatePfnTemplate((__int64)v18, 256, 0);
  v3 = 48 * qword_140C590C0 - 0x220000000000LL;
  if ( !qword_140C590C0 && !*(_WORD *)(v3 + 32) )
  {
    MiSetPfnPteFrame(v3, 0LL);
    *(_QWORD *)(v13 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v13 + 34) = *(_BYTE *)(v13 + 34) & 0xF8 | 5;
    *(_BYTE *)(v13 + 34) = *(_BYTE *)(v13 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v13 + 40) |= 0x40000000000000uLL;
  }
  v14 = a1 + 352;
  v15 = *(_QWORD *)(v14 + 8);
  if ( (v15 & 1) == 0 )
  {
    v4 = *(_QWORD *)(v14 + 8);
    while ( 1 )
    {
LABEL_8:
      if ( !v4 )
        goto LABEL_20;
      v7 = *(int *)(v4 + 24);
      v8 = *(_DWORD *)(v4 + 24) & 0x1FFFFFFF;
      if ( v8 == 29 )
      {
        if ( (MiFlags & 0x1000) == 0 )
          goto LABEL_14;
      }
      else if ( v8 == 42 )
      {
        v16 = *(_QWORD *)(v4 + 40);
        v17 = *(_QWORD *)(v4 + 32);
        BugCheckParameter4 = 0LL;
        if ( (int)HvlChangeIsolatedMemoryVisibility(v17, v16, v2, &BugCheckParameter4) < 0 )
          KeBugCheckEx(0x1Au, 0x20B314uLL, *(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40), BugCheckParameter4);
LABEL_14:
        MiCreateFreePfns(v4);
        goto LABEL_15;
      }
      if ( (v7 & 0x80000000) == 0LL )
      {
        if ( v8 <= 0x18 )
        {
          v9 = 16777524;
          if ( _bittest(&v9, v8) )
            goto LABEL_14;
        }
        if ( (unsigned int)v7 > 0x2A || (v11 = 0x5C5C0C00048LL, !_bittest64(&v11, v7)) )
          MiCreateDescriptorPfns(v4, v19, v18);
      }
LABEL_15:
      v10 = *(_QWORD **)(v4 + 8);
      v5 = v4;
      if ( v10 )
      {
        v6 = (_QWORD *)*v10;
        v4 = *(_QWORD *)(v4 + 8);
        if ( *v10 )
        {
          do
          {
            v4 = (unsigned __int64)v6;
            v6 = (_QWORD *)*v6;
          }
          while ( v6 );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v4 || *(_QWORD *)v4 == v5 )
            break;
          v5 = v4;
        }
      }
    }
  }
  if ( v15 != 1 )
  {
    v4 = v15 ^ (v14 | 1);
    goto LABEL_8;
  }
LABEL_20:
  result = KeFlushTb(3u, 2u);
  MiFlags |= 0x20000000u;
  return result;
}
