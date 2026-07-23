/*
 * XREFs of sub_1407FC558 @ 0x1407FC558
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140999930 @ 0x140999930 (sub_140999930.c)
 */

__int64 __fastcall sub_1407FC558(int a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  int v8; // esi
  __int64 i; // rdi
  int v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-78h] BYREF
  int *v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int *v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v8 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  for ( i = qword_140C23110; (__int64 *)i != &qword_140C23110; i = *(_QWORD *)i )
  {
    sub_1402D66A8(i + 400);
    if ( *(_BYTE *)(i + 88) )
    {
      if ( !v8 )
      {
        if ( a1 == 84 )
        {
          if ( a3 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128) + 2;
          sub_140999930(i);
          memmove((void *)(a2 + 8), (const void *)(i + 216), 8LL * (unsigned int)(*(_DWORD *)(i + 128) + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( a3 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128);
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 132);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 148);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 164);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 180);
          *(_DWORD *)(a2 + 68) = *(_DWORD *)(i + 196);
          *(_OWORD *)(a2 + 72) = *(_OWORD *)(i + 112);
        }
      }
      ++v8;
    }
    sub_1402935D0(i + 400);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  if ( v8 != 1 )
  {
    if ( (unsigned int)dword_140C03A00 > 2 )
    {
      v11 = a1;
      v15 = 4LL;
      v14 = &v11;
      v17 = 4LL;
      v16 = &v12;
      v12 = v8;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_1400314E1, 0LL, 0LL, 4u, &v13);
    }
    return (unsigned int)-1073741823;
  }
  return v4;
}
