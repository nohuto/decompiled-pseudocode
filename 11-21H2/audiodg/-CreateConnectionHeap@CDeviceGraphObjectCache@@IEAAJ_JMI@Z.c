/*
 * XREFs of ?CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x14001C7F0
 * Callers:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140020C84 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140002DE8 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140005974 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::CreateConnectionHeap(
        CDeviceGraphObjectCache *this,
        __int64 a2,
        float a3,
        unsigned int a4)
{
  void *v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 6) )
  {
    v8 = -2005139382;
    v10 = 214LL;
    goto LABEL_17;
  }
  if ( !a2 || a2 > 25000000 )
  {
    v10 = 217LL;
    goto LABEL_16;
  }
  if ( a3 > 384000.0 || a3 < 10.0 )
  {
    v10 = 218LL;
    goto LABEL_16;
  }
  if ( a4 - 1 > 0x1F )
  {
    v10 = 219LL;
LABEL_16:
    v8 = -2147024809;
    goto LABEL_17;
  }
  v5 = (void *)AERTCreateHeap(
                 80 * a4 * (unsigned __int64)(unsigned int)(int)(a3 * (double)(int)a2 / 10000000.0 + 0.5),
                 4LL,
                 (unsigned __int64)(unsigned int)(int)((double)(int)a2 * 192000.0 / 10000000.0 + 0.5) << 7);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
  {
    v8 = AERTLockHeap(v5, v6, v7);
    if ( v8 >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
      return 0LL;
    }
    v10 = 245LL;
  }
  else
  {
    v8 = -2147024882;
    v10 = 242LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v8,
    v11);
  return (unsigned int)v8;
}
