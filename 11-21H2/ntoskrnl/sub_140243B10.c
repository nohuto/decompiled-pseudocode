/*
 * XREFs of sub_140243B10 @ 0x140243B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243D5C @ 0x140243D5C (sub_140243D5C.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042BE50 @ 0x14042BE50 (sub_14042BE50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140243B10(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 j; // rcx
  unsigned int k; // ebx
  __int64 v16; // rax
  _DWORD v17[84]; // [rsp+0h] [rbp-228h] BYREF
  _DWORD *v18; // [rsp+150h] [rbp-D8h]
  _QWORD v19[20]; // [rsp+160h] [rbp-C8h] BYREF

  v18 = v17;
  memset(&v17[40], 0, 0x5BuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v17[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v17[60] + 3) = SystemArgument1;
    *(_QWORD *)((char *)&v17[44] + 3) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v17[54] + 3) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    sub_14042BE50(DeferredContext);
  }
  memset(v19, 0, sizeof(v19));
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)dword_140D06884; ++i )
  {
    v10 = sub_140348800(i);
    if ( v10 )
    {
      v8 += (unsigned int)(*(_DWORD *)(v10 + 35856) - *(_DWORD *)(v10 + 35940));
      v11 = 0LL;
      v12 = (_DWORD *)(v10 + 35776);
      do
      {
        v19[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  if ( v8 > (unsigned int)dword_140C46FE4 )
  {
    v13 = 0;
    for ( j = 0LL; j < 20; ++j )
    {
      if ( v19[j] > (unsigned __int64)(unsigned int)dword_140C46FE0 )
        break;
      ++v13;
    }
  }
  if ( v13 != 20 )
  {
    sub_140243D5C(v19);
    dword_140C46FE0 *= 2;
    if ( (unsigned int)dword_140C46FE0 > 0x1900 )
      dword_140C46FE0 = 6400;
    dword_140C46FE4 *= 2;
    if ( (unsigned int)dword_140C46FE4 > 0x7D00 )
      dword_140C46FE4 = 32000;
    for ( k = 0; k < (unsigned int)dword_140D06884; ++k )
    {
      v16 = sub_140348800(k);
      if ( v16 )
      {
        *(_OWORD *)(v16 + 35860) = *(_OWORD *)(v16 + 35776);
        *(_OWORD *)(v16 + 35876) = *(_OWORD *)(v16 + 35792);
        *(_OWORD *)(v16 + 35892) = *(_OWORD *)(v16 + 35808);
        *(_OWORD *)(v16 + 35908) = *(_OWORD *)(v16 + 35824);
        *(_OWORD *)(v16 + 35924) = *(_OWORD *)(v16 + 35840);
        *(_DWORD *)(v16 + 35940) = *(_DWORD *)(v16 + 35856);
      }
    }
  }
  _InterlockedOr(&dword_140C46D90, 4u);
}
