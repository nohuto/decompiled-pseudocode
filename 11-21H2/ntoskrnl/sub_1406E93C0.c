/*
 * XREFs of sub_1406E93C0 @ 0x1406E93C0
 * Callers:
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_1406E9370 @ 0x1406E9370 (sub_1406E9370.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14091CB44 @ 0x14091CB44 (sub_14091CB44.c)
 *     sub_14091CDE8 @ 0x14091CDE8 (sub_14091CDE8.c)
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

_UNKNOWN **__fastcall sub_1406E93C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  _UNKNOWN **result; // rax
  _QWORD *v8; // rdi
  bool v9; // bp
  _QWORD *v12; // rbx
  char v13; // r10
  ULONG_PTR v14; // rsi
  _QWORD *v15; // r15
  ULONG_PTR v16; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0;
  if ( v8 )
  {
    v12 = (_QWORD *)v8[4];
    result = (_UNKNOWN **)(v8 + 4);
    v13 = 0;
    if ( v12 != v8 + 4 )
    {
      do
      {
        if ( v12 == v8 + 4 )
        {
          v12 = v8;
          v13 = 1;
          v8 = (_QWORD *)v8[3];
        }
        else
        {
          v14 = v12[2];
          v15 = v12;
          if ( v13 )
          {
            v12 = (_QWORD *)*v12;
            if ( !v9 )
              v9 = (unsigned int)sub_14042A5E0(v14, a4) == 1;
            if ( a6 )
              sub_1406FEA54(v14);
            else
              sub_140AB4300(v14);
            if ( v9 )
            {
              v12 = v8;
              v13 = 1;
              v8 = (_QWORD *)v8[3];
              goto LABEL_18;
            }
          }
          else
          {
            v16 = v12[2];
            if ( a6 )
            {
              sub_14071B250(v16);
            }
            else if ( a7 )
            {
              sub_1407C0854(v16);
            }
            else
            {
              sub_140AB42D0(v16);
            }
            if ( (unsigned int)sub_14042A5E0(v14, a5) == 1 )
            {
              v12 = (_QWORD *)v12[4];
              v8 = v15;
            }
            else
            {
              v12 = (_QWORD *)*v12;
              if ( a6 )
                sub_1406FEA54(v14);
              else
                sub_140AB4300(v14);
            }
          }
          v13 = 0;
        }
LABEL_18:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
      }
      while ( v12 != result );
    }
  }
  return result;
}
