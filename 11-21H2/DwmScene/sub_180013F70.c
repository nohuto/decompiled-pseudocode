/*
 * XREFs of sub_180013F70 @ 0x180013F70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180013F70(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 *v8; // rdx
  size_t v9; // r8
  void **v10; // rdx
  __int64 result; // rax
  char *v12[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    v12[2] = 0LL;
    v13 = 15LL;
    LOBYTE(v12[0]) = 0;
    if ( !a2 )
    {
      v10 = &qword_1801F5D78;
      if ( (unsigned __int64)qword_1801F5D90 >= 0x10 )
        v10 = (void **)qword_1801F5D78;
      sub_180012190((__int64 *)v12, v10, qword_1801F5D88);
      goto LABEL_23;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_23:
            LOBYTE(a3) = v3 == 1;
            sub_180049AB8(*(_QWORD *)(a1 + 16), v12, a3);
            if ( v13 >= 0x10 )
              sub_180010884(v12[0], v13 + 1);
            return 0LL;
          }
          v8 = &qword_1801F5D38;
          if ( (unsigned __int64)qword_1801F5D50 >= 0x10 )
            v8 = (__int64 *)qword_1801F5D38;
          v9 = qword_1801F5D48;
        }
        else
        {
          v8 = &qword_1801F5CB8;
          if ( (unsigned __int64)qword_1801F5CD0 >= 0x10 )
            v8 = (__int64 *)qword_1801F5CB8;
          v9 = qword_1801F5CC8;
        }
      }
      else
      {
        v8 = &qword_1801F5C78;
        if ( (unsigned __int64)qword_1801F5C90 >= 0x10 )
          v8 = (__int64 *)qword_1801F5C78;
        v9 = qword_1801F5C88;
      }
    }
    else
    {
      v8 = (__int64 *)&Src;
      if ( (unsigned __int64)qword_1801F5CB0 >= 0x10 )
        v8 = (__int64 *)Src;
      v9 = Size;
    }
    sub_180012190((__int64 *)v12, v8, v9);
    goto LABEL_23;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      222LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
