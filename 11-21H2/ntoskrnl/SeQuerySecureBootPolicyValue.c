/*
 * XREFs of SeQuerySecureBootPolicyValue @ 0x140865150
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409CDED0 @ 0x1409CDED0 (sub_1409CDED0.c)
 *     sub_1409CE000 @ 0x1409CE000 (sub_1409CE000.c)
 */

__int64 __fastcall SeQuerySecureBootPolicyValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v8; // ebx
  __int64 v10; // rax
  size_t v11; // rdx
  size_t Size; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h] BYREF

  Src = 0LL;
  LODWORD(Size) = 0;
  if ( qword_140D01440 )
  {
    v10 = sub_1409CDED0(a1, a1, a2);
    if ( v10 )
    {
      v8 = sub_1409CE000(qword_140D04980 + *(unsigned int *)(v10 + 12), a3, &Src, &Size);
      if ( v8 >= 0 )
      {
        v11 = (unsigned int)Size;
        *a6 = Size;
        if ( a4 )
        {
          if ( a5 >= (unsigned int)v11 )
            memmove(a4, Src, v11);
          else
            return (unsigned int)-1073741789;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-2143092730;
  }
  return (unsigned int)v8;
}
