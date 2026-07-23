/*
 * XREFs of sub_14099DE60 @ 0x14099DE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     sub_140549E8C @ 0x140549E8C (sub_140549E8C.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 */

__int64 __fastcall sub_14099DE60(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  __int64 i; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  int LpIndexFromProcessorIndex; // r15d
  unsigned int v10; // ebx
  int v11; // ebx

  if ( (dword_140D0689C & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 16);
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  v4 = 0;
  if ( !v3 )
    return (unsigned int)sub_140848C18(v1, 1);
  for ( i = 0LL; ; i += 32LL )
  {
    v6 = *(_QWORD *)(v1 + 552);
    v7 = 0LL;
    v8 = *(_DWORD *)(i + v6 + 28);
    if ( v8 == 1 )
    {
      LpIndexFromProcessorIndex = *(_DWORD *)(i + v6);
      goto LABEL_9;
    }
    if ( v8 == 2 )
      goto LABEL_14;
    v10 = *(_DWORD *)(i + v6);
    if ( v10 == -1 )
      break;
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(v10);
    v7 = sub_140348800(v10) + 33600;
LABEL_9:
    if ( v2 )
    {
      if ( LpIndexFromProcessorIndex != -1 )
      {
        v11 = sub_140549E8C(LpIndexFromProcessorIndex, (__int128 *)(v2 + 104LL * v4));
        if ( v11 < 0 )
          goto LABEL_17;
      }
    }
    if ( v7 )
      *(_DWORD *)(v7 + 224) = 3;
LABEL_14:
    if ( ++v4 >= v3 )
      return (unsigned int)sub_140848C18(v1, 1);
  }
  v11 = -1073741811;
LABEL_17:
  sub_140224C00(&qword_140C22FE0);
  return (unsigned int)v11;
}
