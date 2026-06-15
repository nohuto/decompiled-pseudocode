/*
 * XREFs of ?CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x140003070
 * Callers:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140003468 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x14000316C (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x1400031D4 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::CreateConnectionHeap(
        CDeviceGraphObjectCache *this,
        __int64 a2,
        float a3,
        unsigned int a4)
{
  void *v5; // rax
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 6) )
  {
    v6 = -2005139382;
    v8 = 214LL;
    goto LABEL_17;
  }
  if ( !a2 || a2 > 25000000 )
  {
    v8 = 217LL;
    goto LABEL_16;
  }
  if ( a3 > 384000.0 || a3 < 10.0 )
  {
    v8 = 218LL;
    goto LABEL_16;
  }
  if ( a4 - 1 > 0x1F )
  {
    v8 = 219LL;
LABEL_16:
    v6 = -2147024809;
    goto LABEL_17;
  }
  v5 = AERTCreateHeap(
         80 * a4 * (unsigned __int64)(unsigned int)(int)(a3 * (double)(int)a2 / 10000000.0 + 0.5),
         4uLL,
         (unsigned __int64)(unsigned int)(int)((double)(int)a2 * 192000.0 / 10000000.0 + 0.5) << 7);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
  {
    v6 = AERTLockHeap(v5);
    if ( v6 >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
      return 0LL;
    }
    v8 = 245LL;
  }
  else
  {
    v6 = -2147024882;
    v8 = 242LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v6,
    v9);
  return (unsigned int)v6;
}
