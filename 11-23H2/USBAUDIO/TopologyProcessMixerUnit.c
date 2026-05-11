/*
 * XREFs of TopologyProcessMixerUnit @ 0x1C003C9F0
 * Callers:
 *     <none>
 * Callees:
 *     PropertyInitializeMixerControlRange @ 0x1C003CDA0 (PropertyInitializeMixerControlRange.c)
 */

__int64 __fastcall TopologyProcessMixerUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  __int64 v7; // r13
  __int64 v9; // rbp
  unsigned int v10; // r8d
  _DWORD *v11; // r14
  int v12; // ecx
  int v13; // r10d
  __int64 v14; // r9
  _DWORD *v15; // rdx
  int v16; // eax
  __int64 Pool2; // rax
  char *v18; // r15
  NTSTATUS v19; // ebx
  unsigned int v20; // r12d
  int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // r10
  char *v24; // rdx
  unsigned int v25; // ecx
  unsigned int v26; // esi
  __int64 v27; // r15
  int v28; // ebp
  unsigned int v29; // edx
  NTSTATUS v30; // eax
  int v31; // ecx
  bool v32; // zf
  unsigned int v33; // edx
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  unsigned int v36; // eax
  unsigned int v38; // [rsp+20h] [rbp-88h]
  __int64 i; // [rsp+28h] [rbp-80h]
  unsigned int v40; // [rsp+28h] [rbp-80h]
  char *v41; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+38h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+50h] [rbp-58h]
  int v46; // [rsp+B8h] [rbp+10h]
  int v47; // [rsp+C0h] [rbp+18h]
  int v48; // [rsp+C8h] [rbp+20h]

  v6 = a5;
  v7 = 0LL;
  v46 = 7;
  v9 = a3 + 168LL * *a5;
  v10 = *(_DWORD *)(a2 + 32);
  v44 = v9;
  v11 = (_DWORD *)(a4 + 16LL * (unsigned int)*a6);
  v43 = *(_QWORD *)(a2 + 72);
  if ( !v10 )
    return (unsigned int)-1073741438;
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 24);
  v14 = v10;
  v15 = (_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
  do
  {
    v16 = *v15 * v13;
    v15 += 3;
    v12 += v16;
    --v14;
  }
  while ( v14 );
  if ( v12 )
  {
    Pool2 = ExAllocatePool2(256LL, 32 * v12 + 24 * v10, 1096972357LL);
    v41 = (char *)Pool2;
    v18 = (char *)Pool2;
    if ( Pool2 )
    {
      v19 = 0;
      v20 = 0;
      v48 = 0;
      v21 = 0;
      v47 = 0;
      v22 = Pool2 + 24LL * *(unsigned int *)(a2 + 32);
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(a2 + 28);
      for ( i = v22; v20 < *(_DWORD *)(a2 + 32); v48 = ++v20 )
      {
        if ( v19 < 0 )
          break;
        v23 = 3LL * v20;
        *v11 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20);
        v11[1] = 0;
        v11[2] = *v6;
        v11[3] = 1;
        v11 += 4;
        ++*v6;
        ++*a6;
        v42 = v9 + 168LL * v20;
        *(_DWORD *)(v42 + 76) = 4;
        *(_DWORD *)(v42 + 80) = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(v42 + 8) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v42 + 16) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v42 + 136) = USBCntrlGetSetMixerLevels;
        v24 = &v18[24 * v20];
        *(_QWORD *)(v42 + 128) = v24;
        *(_DWORD *)v24 = v20;
        *((_DWORD *)v24 + 1) = v21;
        *((_DWORD *)v24 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4);
        *((_DWORD *)v24 + 3) = *(_DWORD *)(a2 + 24);
        *((_QWORD *)v24 + 2) = v22;
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4) )
        {
          v25 = *(_DWORD *)(a2 + 24);
          v26 = 0;
          v27 = i;
          v28 = v46;
          do
          {
            if ( v19 < 0 )
              break;
            v29 = 0;
            if ( v25 )
            {
              do
              {
                v38 = v7;
                if ( v19 < 0 )
                  break;
                *(_DWORD *)(v27 + 4) = v26 + 1;
                *(_DWORD *)(v27 + 8) = v29 + 1;
                v40 = v29 + 1;
                *(_BYTE *)(v27 + 1) = (*(_BYTE *)(v7 + v43) & (unsigned __int8)(1 << v28)) != 0;
                v30 = PropertyInitializeMixerControlRange(a1, v42, v27);
                v31 = v28--;
                v19 = v30;
                if ( !v31 )
                  v28 = 7;
                v29 = v40;
                v7 = (unsigned int)(v7 + 1);
                v32 = v31 == 0;
                v25 = *(_DWORD *)(a2 + 24);
                if ( !v32 )
                  v7 = v38;
                v27 += 32LL;
              }
              while ( v40 < v25 );
              v21 = v47;
              v23 = 3LL * v20;
              v46 = v28;
              i = v27;
            }
            ++v21;
            ++v26;
            v47 = v21;
          }
          while ( v26 < *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v23 + 4) );
          v6 = a5;
          v9 = v44;
          v18 = v41;
          v20 = v48;
          v22 = i;
        }
      }
      v33 = 0;
      v34 = 168LL * v20;
      *(_DWORD *)(v34 + v9 + 76) = 6;
      *(_DWORD *)(v34 + v9 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v34 + v9 + 8) = &KSNODETYPE_SUM;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v35 = v11 + 2;
        do
        {
          v36 = *v6 - v33;
          *(v35 - 1) = 0;
          *(v35 - 2) = (v36 - 1) | 0x80000000;
          ++v33;
          *v35 = *v6;
          v35[1] = v33;
          v35 += 4;
          ++*a6;
        }
        while ( v33 < *(_DWORD *)(a2 + 32) );
        v18 = v41;
      }
      ++*v6;
      if ( v19 < 0 || (v19 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v18, ExFreePool), v19 < 0) )
        ExFreePool(v18);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v19;
}
