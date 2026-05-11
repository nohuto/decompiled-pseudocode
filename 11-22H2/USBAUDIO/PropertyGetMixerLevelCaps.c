/*
 * XREFs of PropertyGetMixerLevelCaps @ 0x1C002EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetMixerLevelCaps(IRP *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  unsigned int v7; // esi
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  const GUID *Type; // r8
  unsigned int v11; // edx
  unsigned __int8 *v12; // rcx
  unsigned int v13; // r9d
  unsigned int i; // edx
  int v15; // eax

  v3 = a3 + 2;
  v7 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
    v11 = 16 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4 + 8;
    if ( Length )
    {
      if ( Length >= 8 )
      {
        *a3 = *(_DWORD *)Type->Data4;
        v7 = 0;
        a3[1] = *(_DWORD *)&Type->Data4[4];
        a1->IoStatus.Information = 8LL;
        if ( Length == v11 )
        {
          v12 = *(unsigned __int8 **)&Type[1].Data1;
          v13 = 0;
          for ( a1->IoStatus.Information = v11; v13 < *(_DWORD *)Type->Data4; ++v13 )
          {
            for ( i = 0; i < *(_DWORD *)&Type->Data4[4]; v12 += 32 )
            {
              *v3 = *v12;
              if ( v12[1] )
              {
                v3[1] = *((_DWORD *)v12 + 6);
                v3[2] = *((_DWORD *)v12 + 7);
                v15 = *((_DWORD *)v12 + 4);
              }
              else
              {
                v3[1] = *((_DWORD *)v12 + 3);
                v3[2] = *((_DWORD *)v12 + 3);
                v15 = 0;
              }
              v3[3] = v15;
              ++i;
              v3 += 4;
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741789;
      a1->IoStatus.Information = v11;
    }
  }
  return v7;
}
