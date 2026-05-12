/*
 * XREFs of RaidRegisterPerfStates @ 0x1C0049B50
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidGetStorPoFxPerfState @ 0x1C0041F10 (RaidGetStorPoFxPerfState.c)
 *     RaidValidatePerfSets @ 0x1C004A3C0 (RaidValidatePerfSets.c)
 */

__int64 __fastcall RaidRegisterPerfStates(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  __int64 v12; // r8
  _DWORD *Pool; // rax
  void *v14; // rsi
  __int64 v16; // r11
  _QWORD *v17; // r14
  _QWORD *v18; // r9
  _DWORD *v19; // r10
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  __int64 StorPoFxPerfState; // rax
  void *v24; // r9
  unsigned int v25; // ebx

  v6 = a4;
  if ( !a4 || !a5 || !(unsigned __int8)RaidValidatePerfSets(a5, a4) )
    return 3221225485LL;
  v10 = 48 * v6 + 56;
  if ( (_DWORD)v6 )
  {
    v11 = (_DWORD *)(a5 + 24);
    v12 = (unsigned int)v6;
    do
    {
      if ( !*(v11 - 1) )
        v10 += 16 * *v11;
      v11 += 10;
      --v12;
    }
    while ( v12 );
  }
  Pool = (_DWORD *)RaidAllocatePool(64LL, v10, 1330667858LL, a1);
  v14 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *Pool = v6;
  v16 = v6;
  v17 = &Pool[12 * v6 + 14];
  if ( (_DWORD)v6 )
  {
    v18 = (_QWORD *)(a5 + 24);
    v19 = Pool + 9;
    do
    {
      *(_QWORD *)(v19 - 3) = *(v18 - 2);
      *v19 = *((_DWORD *)v18 - 1);
      v20 = 0;
      if ( *((_DWORD *)v18 - 2) != 3 )
        v20 = *((_DWORD *)v18 - 2);
      *(v19 - 1) = v20;
      v21 = *((_DWORD *)v18 - 1);
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          *(_QWORD *)(v19 + 1) = *v18;
          *(_QWORD *)(v19 + 3) = v18[1];
        }
      }
      else
      {
        *(_QWORD *)(v19 + 3) = v17;
        v22 = 0;
        for ( v19[1] = *(_DWORD *)v18; v22 < *(_DWORD *)v18; v17 += 2 )
        {
          StorPoFxPerfState = RaidGetStorPoFxPerfState((_DWORD *)v18 - 6, v22++);
          v17[1] = *(_QWORD *)(StorPoFxPerfState + 16);
          *v17 = *(_QWORD *)(StorPoFxPerfState + 8);
        }
      }
      v18 += 5;
      v19 += 12;
      --v16;
    }
    while ( v16 );
  }
  v24 = RaidNullReference;
  if ( **(_DWORD **)(a1 + 64) != 1 )
    v24 = RaidAdapterPerfStateCallback;
  v25 = PoFxRegisterComponentPerfStates(a6, a2, (a3 >> 7) & 1, v24, v14, 0LL);
  ExFreePoolWithTag(v14, 0x4F506152u);
  return v25;
}
