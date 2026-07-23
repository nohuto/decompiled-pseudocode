/*
 * XREFs of sub_140931064 @ 0x140931064
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_140931378 @ 0x140931378 (sub_140931378.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053F1A8 @ 0x14053F1A8 (sub_14053F1A8.c)
 *     sub_14054455C @ 0x14054455C (sub_14054455C.c)
 */

__int64 sub_140931064()
{
  __int64 result; // rax
  unsigned int v1; // edi
  int *v2; // rbx
  _BYTE v3[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  result = (__int64)memset(v3, 0, 0xCB4uLL);
  v1 = 0;
  if ( (_DWORD)NumOfElements )
  {
    v2 = dword_140D125E4;
    do
    {
      sub_14054455C(*v2, 5, v3);
      result = sub_14053F1A8(*v2, (__int64)v3);
      if ( (int)result < 0 )
        break;
      ++v1;
      v2 += 30;
    }
    while ( v1 < (unsigned int)NumOfElements );
  }
  return result;
}
