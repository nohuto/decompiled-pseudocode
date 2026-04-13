/*
 * XREFs of ?do_length@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z @ 0x18007BE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_length(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v8; // rdi
  int v9; // eax
  int v11; // [rsp+50h] [rbp-28h] BYREF
  char *v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF
  char v15; // [rsp+8Ah] [rbp+12h] BYREF

  v8 = 0LL;
  v11 = *a2;
  if ( a5 )
  {
    while ( a3 != a4 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *, __int64, __int64, __int64 *, char *, char *, char **))(*(_QWORD *)a1 + 48LL))(
             a1,
             &v11,
             a3,
             a4,
             &v13,
             &v14,
             &v15,
             &v12);
      if ( v9 )
      {
        if ( v9 != 3 )
          return (unsigned int)v8;
        return (unsigned int)(v8 + a4 - a3);
      }
      if ( v12 == &v15 )
        ++v8;
      a3 = v13;
      if ( v8 >= a5 )
        return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}
