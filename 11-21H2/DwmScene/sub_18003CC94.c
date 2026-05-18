/*
 * XREFs of sub_18003CC94 @ 0x18003CC94
 * Callers:
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

void __fastcall sub_18003CC94(char **Src, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  void *v9; // rax
  char *v10; // r15
  size_t v11; // r8
  char *v12; // rbx
  char *v13; // rbx
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int64)Src[2];
  if ( v2 <= a2 )
  {
    v5 = (unsigned __int64)Src[3];
    if ( v5 != a2 )
    {
      if ( v5 >= a2 )
      {
        if ( a2 < 0x10 && v5 >= 0x10 )
        {
          v13 = *Src;
          memcpy(Src, *Src, v2 + 1);
          sub_180010884(v13, (unsigned __int64)(Src[3] + 1));
          Src[3] = (char *)15;
        }
      }
      else
      {
        v6 = 0x7FFFFFFFFFFFFFFFLL;
        if ( 0x7FFFFFFFFFFFFFFFLL - v2 < a2 - v2 )
          sub_180012150();
        v7 = a2 | 0xF;
        if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
        {
          v8 = v5 >> 1;
          if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
          {
            v6 = v8 + v5;
            if ( v7 >= v8 + v5 )
              v6 = v7;
          }
        }
        v9 = (void *)sub_180011088(v6 + 1);
        v14 = v9;
        v10 = (char *)v9;
        Src[2] = (char *)a2;
        v11 = v2 + 1;
        Src[3] = (char *)v6;
        if ( v5 < 0x10 )
        {
          memcpy(v9, Src, v11);
          sub_1800110F0((__int64 *)Src, (__int64 *)&v14);
        }
        else
        {
          v12 = *Src;
          memcpy(v9, *Src, v11);
          sub_180010884(v12, v5 + 1);
          *Src = v10;
        }
        Src[2] = (char *)v2;
      }
    }
  }
}
