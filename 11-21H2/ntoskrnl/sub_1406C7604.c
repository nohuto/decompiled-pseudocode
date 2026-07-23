/*
 * XREFs of sub_1406C7604 @ 0x1406C7604
 * Callers:
 *     sub_1406C74F8 @ 0x1406C74F8 (sub_1406C74F8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_140772E98 @ 0x140772E98 (sub_140772E98.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 */

__int64 __fastcall sub_1406C7604(__int64 a1, int a2, WCHAR *a3, __int64 a4, char a5)
{
  int inited; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // [rsp+40h] [rbp-71h] BYREF
  int v17; // [rsp+44h] [rbp-6Dh] BYREF
  HANDLE v18; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v22[76]; // [rsp+80h] [rbp-31h] BYREF
  __int16 v23; // [rsp+CCh] [rbp+1Bh]

  v16 = 88;
  v18 = 0LL;
  Handle = 0LL;
  v17 = 0;
  DestinationString = 0LL;
  inited = sub_14077CD90(a1, a2, 0, 10, (__int64)&v17, (__int64)a3, (__int64)&v16, 0);
  if ( inited == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 240), 1u);
      v17 = 0;
      v16 = 88;
      inited = sub_14077CD90(a1, a2, 0, 10, (__int64)&v17, (__int64)a3, (__int64)&v16, 0);
      if ( inited == -1073741275 )
      {
        v16 = 78;
        v17 = 0;
        v11 = sub_14077CD90(a1, a2, 0, 9, (__int64)&v17, (__int64)v22, (__int64)&v16, 0);
        inited = v11;
        if ( v11 == -1073741275 )
        {
          inited = -1073741772;
        }
        else if ( v11 >= 0 )
        {
          v23 = 0;
          inited = sub_140789460(a1, (unsigned int)v22, v12, v13, 131103, 0, (__int64)&v18, 0LL);
          if ( inited >= 0 )
          {
            inited = sub_140772E98(a1, v18, v21);
            if ( inited >= 0 )
            {
              inited = sub_1402DFBC4(a3, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v22, v21);
              if ( inited >= 0 )
              {
                inited = RtlInitUnicodeStringEx(&DestinationString, a3);
                if ( inited >= 0 )
                {
                  inited = sub_14076FE20(
                             a1,
                             a2,
                             0,
                             10,
                             1,
                             (__int64)DestinationString.Buffer,
                             DestinationString.MaximumLength,
                             0);
                  if ( inited < 0 )
                  {
                    v14 = *(_QWORD *)(a1 + 224);
                    if ( v14 )
                      v15 = *(_QWORD *)(v14 + 8);
                    else
                      v15 = 0LL;
                    sub_140862B44(v18, v21, v15);
                  }
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 240));
      KeLeaveCriticalRegion();
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      inited = -1073741772;
    }
  }
  if ( v18 )
    ZwClose(v18);
  return (unsigned int)inited;
}
