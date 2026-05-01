/*
 * XREFs of ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E4E4
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E6A0 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18004E0B4 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z @ 0x18004E0DC (-HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall HampClientSerializeActivities(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // rsi
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  struct _HAM_ACTIVITY *NextActivity; // rdx
  int v10; // r8d
  __int16 v11; // ax
  __int16 v12; // cx

  v2 = 0;
  LODWORD(v4) = 0;
  FirstActivity = HampClientGetFirstActivity(a1);
  if ( FirstActivity )
  {
    do
    {
      if ( (int)v4 + 1 < (unsigned int)v4 )
        return (unsigned int)-1073741675;
      v4 = (unsigned int)(v4 + 1);
      FirstActivity = HampClientGetNextActivity(FirstActivity);
    }
    while ( FirstActivity );
    if ( !(_DWORD)v4 )
      return v2;
    if ( !is_mul_ok(v4, 0x98uLL) )
      return (unsigned int)-1073741675;
    Heap = HampAllocateHeap(152 * v4);
    *((_QWORD *)a2 + 1) = Heap;
    v8 = Heap;
    if ( Heap )
    {
      *((_DWORD *)a2 + 4) = v4;
      memset_0(Heap, 0, 152 * v4);
      NextActivity = HampClientGetFirstActivity(a1);
      if ( NextActivity )
      {
        v10 = 1;
        do
        {
          if ( *((_BYTE *)NextActivity + 562) == 3 )
            v8[36] |= v10;
          *(_QWORD *)v8 = *((_QWORD *)NextActivity + 5);
          *((_OWORD *)v8 + 1) = *(_OWORD *)((char *)NextActivity + 124);
          *((_OWORD *)v8 + 2) = *(_OWORD *)((char *)NextActivity + 140);
          *((_OWORD *)v8 + 3) = *(_OWORD *)((char *)NextActivity + 156);
          *((_OWORD *)v8 + 4) = *(_OWORD *)((char *)NextActivity + 172);
          *((_OWORD *)v8 + 5) = *(_OWORD *)((char *)NextActivity + 188);
          *((_OWORD *)v8 + 6) = *(_OWORD *)((char *)NextActivity + 204);
          *((_OWORD *)v8 + 7) = *(_OWORD *)((char *)NextActivity + 220);
          *((_OWORD *)v8 + 8) = *(_OWORD *)((char *)NextActivity + 236);
          v8[3] = *((_DWORD *)NextActivity + 106);
          *((_WORD *)v8 + 5) = 7;
          v11 = *((_WORD *)v8 + 4) ^ (*((_WORD *)v8 + 4) ^ (2 * (*((_DWORD *)NextActivity + 28) >> 7))) & 6;
          *((_WORD *)v8 + 4) = v11;
          v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * (*((_DWORD *)NextActivity + 28) >> 14))) & 8;
          *((_WORD *)v8 + 4) = v12;
          *((_WORD *)v8 + 4) = v12 ^ v10 & (v12 ^ (*((_DWORD *)NextActivity + 28) >> 9));
          v8 += 38;
          NextActivity = HampClientGetNextActivity(NextActivity);
        }
        while ( NextActivity );
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
