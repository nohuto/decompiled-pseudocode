/*
 * XREFs of CmpQueryKeyValueData @ 0x1406DCE00
 * Callers:
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmpGetValueData @ 0x1406DC850 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x140708EC0 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        _DWORD *Size,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v8; // r11d
  __int64 v9; // r10
  unsigned int v10; // r15d
  _DWORD *v11; // rdi
  unsigned __int16 v12; // dx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v19; // r9d
  unsigned int v20; // r9d
  unsigned int v21; // esi
  size_t v22; // r8
  unsigned int v23; // edx
  unsigned int v24; // r13d
  unsigned int v25; // ecx
  unsigned int v26; // r8d
  unsigned int i; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // edx
  int v31; // r9d
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  unsigned int v35; // r8d
  unsigned int v36; // esi
  void *Src; // [rsp+48h] [rbp-60h] BYREF
  __int64 v38[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+60h] [rbp-48h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  __int64 v43; // [rsp+C8h] [rbp+20h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = 0;
  Src = 0LL;
  LOBYTE(v43) = 0;
  v38[0] = 0xFFFFFFFFLL;
  v39 = *(_QWORD *)(a1 + 32);
  v11 = Size;
  v38[1] = a3;
  v12 = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    v12 = *(_WORD *)(a3 + 2);
  if ( a4 == 2 )
  {
    v13 = *(_DWORD *)(a3 + 4);
    v14 = v13 + 0x80000000;
    if ( v13 < 0x80000000 )
      v14 = *(_DWORD *)(a3 + 4);
    LODWORD(Size) = v14;
    v15 = 0;
    *a7 = v14 + 12;
    v16 = a6;
    if ( a6 < 0xC )
    {
      v15 = -1073741789;
    }
    else
    {
      *v11 = 0;
      v11[1] = *(_DWORD *)(a3 + 12);
      v11[2] = v14;
      v17 = v16 - 12;
      if ( v17 >= v14 )
        v17 = v14;
      else
        v15 = -2147483643;
      if ( v14 )
      {
        if ( v13 >= 0x80000000 )
        {
          Src = (void *)(a3 + 8);
        }
        else if ( !CmpGetValueData(*(_QWORD *)(v9 + 32), v8, a3, (unsigned int *)&Size, (__int64)&Src, (__int64)&v43) )
        {
          v15 = -1073741670;
        }
        if ( Src )
          memmove(v11 + 3, Src, v17);
      }
    }
  }
  else if ( a4 )
  {
    v19 = a4 - 1;
    if ( v19 && (v31 = v19 - 2) != 0 )
    {
      if ( v31 == 1 )
      {
        v32 = *(_DWORD *)(a3 + 4);
        v33 = v32 + 0x80000000;
        if ( v32 < 0x80000000 )
          v33 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v33;
        v15 = 0;
        *a7 = v33 + 8;
        v34 = a6;
        if ( a6 < 8 )
        {
          v15 = -1073741789;
        }
        else
        {
          *v11 = *(_DWORD *)(a3 + 12);
          v11[1] = v33;
          v35 = v34 - 8;
          v36 = v33;
          if ( v35 < v33 )
          {
            v36 = v35;
            v15 = -2147483643;
          }
          if ( v33 )
          {
            if ( v32 < 0x80000000 )
            {
              if ( !CmpGetValueData(*(_QWORD *)(v9 + 32), v8, a3, (unsigned int *)&Size, (__int64)&Src, (__int64)&v43) )
                v15 = -1073741670;
            }
            else
            {
              Src = (void *)(a3 + 8);
            }
            if ( Src )
              memmove(v11 + 2, Src, v36);
          }
        }
      }
      else
      {
        v15 = -1073741811;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a3 + 4);
      v42 = v20;
      if ( v20 >= 0x80000000 )
        v21 = v20 + 0x80000000;
      else
        v21 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v21;
      v22 = v12;
      v23 = v21 + v12 + 20;
      v24 = 0;
      if ( v21 )
      {
        v24 = (v23 - v21 + 7) & 0xFFFFFFF8;
        if ( v24 > v23 - v21 )
          v23 = v24 + v21;
      }
      v15 = 0;
      *a7 = v23;
      v25 = a6;
      if ( a6 < 0x14 )
      {
        v15 = -1073741789;
      }
      else
      {
        *v11 = 0;
        v11[1] = *(_DWORD *)(a3 + 12);
        v11[3] = v21;
        v11[4] = v22;
        if ( v25 - 20 < (unsigned int)v22 )
        {
          v22 = v25 - 20;
          v15 = -2147483643;
        }
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v26 = (unsigned int)v22 >> 1;
          if ( v26 >= *(unsigned __int16 *)(a3 + 2) )
            v26 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v26; ++i )
            *((_WORD *)v11 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v11 + 5, (const void *)(a3 + 20), v22);
          v20 = v42;
          v9 = a1;
          v8 = a2;
        }
        if ( v21 )
        {
          if ( v20 >= 0x80000000 )
          {
            Src = (void *)(a3 + 8);
          }
          else
          {
            if ( !CmpGetValueData(*(_QWORD *)(v9 + 32), v8, a3, (unsigned int *)&Size, (__int64)&Src, (__int64)&v43) )
              v15 = -1073741670;
            v21 = (unsigned int)Size;
          }
          v11[2] = v24;
          if ( a6 >= v24 )
            v10 = a6 - v24;
          if ( v10 >= v21 )
            v10 = v21;
          else
            v15 = -2147483643;
          if ( Src )
            memmove((char *)v11 + v24, Src, v10);
        }
        else
        {
          v11[2] = -1;
        }
      }
    }
  }
  else
  {
    v28 = v12;
    v15 = 0;
    *a7 = v12 + 12;
    v29 = a6;
    if ( a6 < 0xC )
    {
      v15 = -1073741789;
    }
    else
    {
      *v11 = 0;
      v11[1] = *(_DWORD *)(a3 + 12);
      v11[2] = v28;
      v30 = v29 - 12;
      if ( v30 < v28 )
      {
        v28 = v30;
        v15 = -2147483643;
      }
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName(v11 + 3, v28, a3 + 20, *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v11 + 3, (const void *)(a3 + 20), v28);
    }
  }
  if ( Src && Src != (void *)(a3 + 8) )
  {
    if ( (_BYTE)v43 == 1 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v39, v38);
    }
    else
    {
      HvpReleaseCellPaged(v39, v38);
    }
  }
  return v15;
}
