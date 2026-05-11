/*
 * XREFs of PropertyGetDbBasicSupport @ 0x1C002E610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r8d
  unsigned int Length; // r10d
  unsigned int v9; // r9d
  __int64 v10; // r11
  unsigned int v11; // r14d
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  unsigned int v16; // r10d
  _OWORD *v17; // rsi
  _OWORD *v18; // rbp
  _QWORD *v19; // r12
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // r15
  __int64 v23; // rcx

  v4 = a2;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v9 = -1073741811;
  if ( FilterFromIrp )
  {
    v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(v4 + 24)];
    v11 = *(_DWORD *)(v10 + 92);
    v12 = v10 + 128;
    if ( *(_DWORD *)(v4 + 16) == 18 )
      v7 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    v13 = 16 * v11 * (v7 + 1) + 40;
    if ( Length >= 4 )
    {
      v9 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 28) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_DWORD *)(a3 + 4) = v13;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 32) = v11;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v13 )
        {
          v14 = *(_QWORD *)v12;
          v15 = (_DWORD *)(a3 + 40);
          v16 = 0;
          a1->IoStatus.Information = v13;
          v17 = v15 + 4;
          if ( v11 )
          {
            v18 = (_OWORD *)(v14 + 16);
            v19 = (_QWORD *)(v14 + 32);
            do
            {
              *v15 = 2;
              v15[1] = 16;
              v15[2] = v7;
              v15[3] = 2;
              v20 = *(_DWORD *)(v10 + 96);
              if ( _bittest(&v20, v16) )
              {
                if ( *(_DWORD *)(v4 + 16) == 18 )
                {
                  v21 = 0;
                  if ( v7 )
                  {
                    v22 = 0LL;
                    do
                    {
                      v23 = v7 * v16 + v21;
                      v22 += 20LL;
                      ++v21;
                      v17[v23] = *(_OWORD *)(v22 + *v19 - 16);
                    }
                    while ( v21 < v7 );
                    v4 = a2;
                  }
                }
                else
                {
                  *v17 = *v18;
                }
              }
              ++v16;
              v15 = &v17[v7];
              v19 += 5;
              v17 = v15 + 4;
              v18 += 2;
            }
            while ( v16 < v11 );
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v13;
      return (unsigned int)-1073741789;
    }
  }
  return v9;
}
