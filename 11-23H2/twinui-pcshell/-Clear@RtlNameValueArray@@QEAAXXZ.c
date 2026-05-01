/*
 * XREFs of ?Clear@RtlNameValueArray@@QEAAXXZ @ 0x1800EE344
 * Callers:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x1800EE0FC (-Free@RtlNameValueArray@@QEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

void __fastcall RtlNameValueArray::Clear(RtlNameValueArray *this)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  PVOID *v4; // rax
  unsigned __int128 v5; // rax

  v1 = *((_QWORD *)this + 2);
  v2 = 0LL;
  if ( v1 )
  {
    do
    {
      v4 = 0LL;
      if ( v2 < v1 )
      {
        if ( !is_mul_ok(*((_QWORD *)this + 1), v2)
          || (v4 = (PVOID *)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * v2),
              (unsigned __int64)v4 < *((_QWORD *)this + 5)) )
        {
          v4 = 0LL;
        }
      }
      if ( *v4 )
        RtlFreeHeap(*(HANDLE *)this, 0, *v4);
      v1 = *((_QWORD *)this + 2);
      ++v2;
    }
    while ( v2 < v1 );
    if ( v1 )
    {
      v5 = v1 * (unsigned __int128)*((unsigned __int64 *)this + 1);
      if ( is_mul_ok(*((_QWORD *)this + 2), *((_QWORD *)this + 1)) )
      {
        memset_0(*((void **)this + 5), SDWORD2(v5), v5);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
  }
}
