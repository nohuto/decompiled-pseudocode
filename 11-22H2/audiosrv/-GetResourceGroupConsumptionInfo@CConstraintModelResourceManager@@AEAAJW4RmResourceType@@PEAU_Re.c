/*
 * XREFs of ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x180100138
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
        __int64 a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  _OWORD *v9; // r10
  unsigned int v10; // ecx
  _DWORD *v11; // rax
  _OWORD *v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  v5 = 0;
  *a5 = 0LL;
  v9 = operator new(0x21CuLL);
  if ( v9 )
  {
    v10 = 0;
    if ( a4 )
    {
      v11 = a3;
      while ( !v11[131] || *v11 != a2 )
      {
        ++v10;
        v11 += 135;
        if ( v10 >= a4 )
          goto LABEL_8;
      }
      v13 = v9;
      v14 = 4LL;
      v15 = &a3[135 * v10];
      do
      {
        *v13 = *(_OWORD *)v15;
        v13[1] = *((_OWORD *)v15 + 1);
        v13[2] = *((_OWORD *)v15 + 2);
        v13[3] = *((_OWORD *)v15 + 3);
        v13[4] = *((_OWORD *)v15 + 4);
        v13[5] = *((_OWORD *)v15 + 5);
        v13[6] = *((_OWORD *)v15 + 6);
        v13 += 8;
        v16 = *((_OWORD *)v15 + 7);
        v15 += 32;
        *(v13 - 1) = v16;
        --v14;
      }
      while ( v14 );
      v17 = *(_OWORD *)v15;
      *a5 = v9;
      *v13 = v17;
      *((_QWORD *)v13 + 2) = *((_QWORD *)v15 + 2);
      *((_DWORD *)v13 + 6) = v15[6];
    }
    else
    {
LABEL_8:
      operator delete(v9);
      return (unsigned int)-2147023728;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
