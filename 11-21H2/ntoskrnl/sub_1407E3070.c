/*
 * XREFs of sub_1407E3070 @ 0x1407E3070
 * Callers:
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 *     sub_1407E3510 @ 0x1407E3510 (sub_1407E3510.c)
 *     sub_1407E3868 @ 0x1407E3868 (sub_1407E3868.c)
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 *     sub_1407E3C20 @ 0x1407E3C20 (sub_1407E3C20.c)
 *     sub_1407E3D20 @ 0x1407E3D20 (sub_1407E3D20.c)
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 */

__int64 __fastcall sub_1407E3070(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int16 v15; // ax
  __int64 v16; // rcx
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _BYTE v24[336]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  v8 = sub_1407E3510(a2, a4, v24);
  if ( v8 >= 0 )
  {
    v8 = sub_1407E3260(a1, v24, &v21);
    if ( v8 >= 0 )
    {
      v8 = sub_1407E3900(a1, v9, &v20);
      if ( v8 >= 0 )
      {
        v10 = v20;
        v8 = sub_1407E3868(v20, &v22);
        if ( v8 >= 0 )
        {
          v11 = v21;
          v8 = sub_1407E3E2C(v10, v21, DWORD2(v22), v22, v23);
          if ( v8 >= 0 )
          {
            v8 = sub_1407E3D20(v24, v11, &v22, a2, a3, a4);
            if ( v8 >= 0 )
            {
              v12 = *((_QWORD *)KeGetCurrentThread() + 23);
              if ( !*(_QWORD *)(v12 + 1408) )
                goto LABEL_8;
              v15 = *(_WORD *)(v12 + 2412);
              if ( v15 != 332 && v15 != 452 )
                goto LABEL_8;
              v16 = *((_QWORD *)KeGetCurrentThread() + 23);
              if ( !*(_QWORD *)(v16 + 1408) )
                goto LABEL_18;
              v17 = *(_WORD *)(v16 + 2412);
              if ( !v17 )
                goto LABEL_18;
              if ( v17 != 332 )
              {
                if ( v17 != 452 )
                {
LABEL_18:
                  v8 = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                LODWORD(v23) = v23 & 0xFFFFFEFF;
              }
              *((_QWORD *)&v22 + 1) = *(_QWORD *)(v21 + 24);
              v8 = sub_1407E3C20(v20, &v22);
              if ( v8 >= 0 )
              {
                v13 = *((_QWORD *)KeGetCurrentThread() + 23);
                if ( *(_QWORD *)(v13 + 1408) )
                {
                  v18 = *(_WORD *)(v13 + 2412);
                  if ( v18 == 332 || v18 == 452 )
                  {
                    v19 = *((_QWORD *)KeGetCurrentThread() + 23);
                    if ( *(_QWORD *)(v19 + 1408) && *(_WORD *)(v19 + 2412) == 332 )
                      v8 = DWORD2(v22);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  sub_1407E3BE4(a1, v20);
  sub_1407E3B7C(a1, v21);
  return (unsigned int)v8;
}
