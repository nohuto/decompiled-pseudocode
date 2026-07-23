/*
 * XREFs of sub_1407BDB60 @ 0x1407BDB60
 * Callers:
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_1405A44FC @ 0x1405A44FC (sub_1405A44FC.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 * Callees:
 *     sub_14022B4E0 @ 0x14022B4E0 (sub_14022B4E0.c)
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     sub_14024DA70 @ 0x14024DA70 (sub_14024DA70.c)
 *     sub_14030DA10 @ 0x14030DA10 (sub_14030DA10.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 *     sub_1405B85A8 @ 0x1405B85A8 (sub_1405B85A8.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_1407BDB60(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 result; // rax
  BOOL v13; // eax
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r13
  unsigned __int64 v26; // rbx
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  bool v32; // al
  int v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+28h] [rbp-80h]
  BOOL v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+50h] [rbp-58h]
  unsigned __int64 v40; // [rsp+58h] [rbp-50h]
  __int64 i; // [rsp+60h] [rbp-48h]
  __int64 v43; // [rsp+C8h] [rbp+20h] BYREF

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v37 = v4;
  if ( *(_QWORD *)(a1 + 16) == -2LL && (unsigned int)sub_140319990(a1) )
  {
    v29 = *(unsigned int *)(a1 + 52);
    LODWORD(v29) = v29 & 0x7FFFFFFF;
    if ( !(v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
      return 0LL;
    result = sub_1407BE280(v4, v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v5 = 0;
    v38 = (unsigned int)(a3 >> 21);
    v6 = (unsigned int)(a2 >> 21);
    v43 = 0LL;
    v40 = v6;
    v7 = v6;
    v8 = v38;
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
    while ( 1 )
    {
      v10 = 2 - v5;
      v11 = *(_QWORD *)(v9 + 16 * (v10 + 30) + 48);
      result = sub_1403199E0(v11 + (v7 >> 3), v11 + (v8 >> 3), &v43);
      if ( (int)result < 0 )
        break;
      ++v5;
      *(_QWORD *)(v9 + 8 * v10 + 568) += v43;
      v7 >>= 9;
      v8 >>= 9;
      if ( v5 >= 2 )
      {
        v39 = *(_QWORD *)(v4 + 1680);
        sub_14030DA10(a1);
        v13 = sub_14022B4E0(a1);
        v15 = 0;
        v35 = v13;
        v36 = v14;
        v17 = v16 + 552;
        LODWORD(v43) = 0;
        for ( i = v16 + 552; ; v17 = i )
        {
          v33 = v15;
          v18 = v38;
          v19 = 0LL;
          v20 = 0LL;
          v34 = 0LL;
          v21 = 0LL;
          v22 = v6;
          v23 = v17;
          do
          {
            v24 = 0LL;
            v25 = 0LL;
            v26 = v22;
            if ( v22 > v18 )
            {
              v27 = v43;
            }
            else
            {
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v23 + 8), v26) )
                {
                  v27 = v43;
                }
                else
                {
                  ++v24;
                  if ( v15 )
                  {
                    v27 = v43;
                    if ( v21 >= v14 )
                      _bittestandset64(*(signed __int64 **)(v23 + 8), v26);
                  }
                  else
                  {
                    LODWORD(v43) = 1;
                    if ( !(unsigned int)sub_14024DA70() && (v26 == v22 || (v26 & 7) == 0) )
                    {
                      v32 = RtlAreBitsClearEx(v23, v26 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                      v15 = v33;
                      v27 = v43;
                      v14 = v36;
                      if ( v32 )
                        ++v25;
                    }
                  }
                }
                ++v26;
              }
              while ( v26 <= v18 );
              v19 = v34;
              if ( v24 && v21 >= v14 )
              {
                v19 = v24 + v34;
                v34 += v24;
              }
            }
            v20 += v25;
            v22 >>= 9;
            v18 >>= 9;
            ++v21;
            v23 -= 16LL;
          }
          while ( v21 < 3 );
          if ( v15 )
            break;
          v28 = v20 + v19;
          if ( !v35 && !(unsigned int)sub_140319990(a1) )
          {
            v30 = *(unsigned int *)(a1 + 52);
            LODWORD(v30) = v30 & 0x7FFFFFFF;
            v31 = v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
            if ( v31 != 0x7FFFFFFFELL )
              v28 += v31;
          }
          if ( v28 )
          {
            result = sub_1407BE280(v37, v28);
            if ( (int)result < 0 )
              return result;
            v19 = v34;
            v27 = v43;
            v14 = v36;
          }
          if ( !v27 )
            return 0LL;
          *(_QWORD *)(v39 + 288) += v19;
          if ( v20 )
            sub_1405B85A8(v37 + 1664);
          v6 = v40;
          v15 = 1;
        }
        return 0LL;
      }
    }
  }
  return result;
}
