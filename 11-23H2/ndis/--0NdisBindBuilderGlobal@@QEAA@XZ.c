/*
 * XREFs of ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C011F6BC
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0161738 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C011F768 (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 */

NdisBindBuilderGlobal *__fastcall NdisBindBuilderGlobal::NdisBindBuilderGlobal(NdisBindBuilderGlobal *this)
{
  __int64 v2; // rdi
  char *Buckets; // r8
  unsigned __int64 v4; // rcx
  NdisBindBuilderGlobal *result; // rax
  char v6; // cl

  v2 = 8LL;
  Buckets = (char *)Rtl::KHashTableBase<1>::AllocateBuckets(0x40uLL);
  if ( !Buckets )
  {
    v2 = 1LL;
    Buckets = (char *)this + 16;
  }
  if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
  {
    v6 = -1;
    do
    {
      ++v6;
      LODWORD(v2) = (unsigned int)v2 >> 1;
    }
    while ( (_DWORD)v2 );
    v2 = (unsigned int)(1 << v6);
  }
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = Buckets;
  if ( (unsigned int)v2 > 0x4000000 )
    v2 = 0x4000000LL;
  v4 = (unsigned int)v2;
  *((_DWORD *)this + 1) = (32 * v2) | 3;
  if ( Buckets > &Buckets[8 * v2] )
    v4 = 0LL;
  if ( v4 )
    memset64(Buckets, (unsigned __int64)this | 1, v4);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  return result;
}
