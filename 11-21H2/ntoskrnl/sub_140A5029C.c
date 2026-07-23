/*
 * XREFs of sub_140A5029C @ 0x140A5029C
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 *     sub_140A53828 @ 0x140A53828 (sub_140A53828.c)
 */

__int64 __fastcall sub_140A5029C(int a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rbx
  _BYTE v5[976]; // [rsp+20h] [rbp-3E8h] BYREF

  memset(v5, 0, 0x3CCuLL);
  result = (unsigned int)dword_140C4C44C;
  if ( (dword_140C4C44C & 0xC) != 0 )
  {
    result = (__int64)KeGetPcr();
    for ( i = *(_QWORD *)(result + 216); i; i = *(_QWORD *)(i + 184) )
    {
      v4 = *(_QWORD *)(i + 172);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          sub_140A53828(qword_140C54988, *(_QWORD *)(i + 172));
          result = sub_140A5367C();
          if ( (_BYTE)result )
            result = sub_140A53718(qword_140C54978, v4);
        }
      }
      else
      {
        memset(v5, 0, 0x3CCuLL);
        PshedGetErrorSourceInfo(0LL, v5);
        result = sub_140A53828(v5, v4);
      }
    }
  }
  return result;
}
