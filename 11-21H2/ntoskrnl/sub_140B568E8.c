/*
 * XREFs of sub_140B568E8 @ 0x140B568E8
 * Callers:
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_140B56A6C @ 0x140B56A6C (sub_140B56A6C.c)
 *     sub_140B56C04 @ 0x140B56C04 (sub_140B56C04.c)
 */

__int64 __fastcall sub_140B568E8(__int64 a1, int a2, __int64 *a3)
{
  int v5; // edi
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rsi
  unsigned int i; // edx
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v19 = 0LL;
  v18 = 0;
  v5 = sub_140B56C04(a1, a2, 1851878757, (unsigned int)&v20, (__int64)&v18);
  if ( v5 >= 0 )
  {
    v6 = v20;
    v7 = sub_140B56A6C(a1, v20, &v19);
    v8 = v19;
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = v19 + 6;
      v10 = 0;
      if ( *(_WORD *)(v19 + 2) )
      {
        while ( *(_DWORD *)v9 != 65539 || *(_DWORD *)(v9 + 4) != 66569 )
        {
          ++v10;
          v9 += 12LL;
          if ( v10 >= *(unsigned __int16 *)(v19 + 2) )
            goto LABEL_16;
        }
        v11 = *(unsigned __int16 *)(v9 + 8);
        v12 = v11 + 2;
        if ( (unsigned int)v12 < v11 )
        {
          v5 = -1073741675;
        }
        else
        {
          v13 = (void *)sub_1403AA2B8(v12);
          v14 = (__int64)v13;
          if ( v13 )
          {
            v5 = sub_1403A9E4C(
                   a1,
                   v6 + *(unsigned __int16 *)(v8 + 4) + *(unsigned __int16 *)(v9 + 10),
                   *(unsigned __int16 *)(v9 + 8),
                   v13);
            if ( v5 < 0 )
            {
              sub_1403A8CB4(v14);
            }
            else
            {
              *(_WORD *)(v9 + 8) >>= 1;
              for ( i = 0;
                    i < *(unsigned __int16 *)(v9 + 8);
                    *(_WORD *)(v14 + 2 * v16) = __ROR2__(*(_WORD *)(v14 + 2 * v16), 8) )
              {
                v16 = i++;
              }
              *(_WORD *)(v14 + 2LL * i) = 0;
              *a3 = v14;
            }
          }
          else
          {
            v5 = -1073741801;
          }
        }
      }
      else
      {
LABEL_16:
        v5 = -1073741701;
      }
    }
    if ( v8 )
      sub_1403A8CB4(v8);
  }
  return (unsigned int)v5;
}
