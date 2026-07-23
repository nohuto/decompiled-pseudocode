/*
 * XREFs of sub_140246390 @ 0x140246390
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

__int64 __fastcall sub_140246390(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h]

  v4 = *(void **)a1;
  result = (unsigned int)(1 << *(_DWORD *)(a1 + 8));
  if ( (result & 0xA) != 0 )
  {
    if ( byte_140D0688A )
    {
      result = (__int64)KeGetCurrentThread();
      v6 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v6 + 912) )
      {
        if ( (byte_140D0688A & 2) != 0 )
        {
          *(_QWORD *)&v7 = 1LL;
          *((_QWORD *)&v7 + 1) = v4;
          result = 0LL;
          __asm { invpcid eax, [rsp+48h+var_28] }
        }
        else
        {
          result = sub_140420AD0(v6, 0LL, 1LL, a4);
        }
      }
    }
  }
  __invlpg(v4);
  return result;
}
