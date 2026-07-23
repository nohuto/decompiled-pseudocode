/*
 * XREFs of sub_140A543D8 @ 0x140A543D8
 * Callers:
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 *     sub_140A55270 @ 0x140A55270 (sub_140A55270.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_140252460 @ 0x140252460 (sub_140252460.c)
 *     sub_1403B6420 @ 0x1403B6420 (sub_1403B6420.c)
 *     sub_1403B6450 @ 0x1403B6450 (sub_1403B6450.c)
 *     sub_1403BECF8 @ 0x1403BECF8 (sub_1403BECF8.c)
 *     sub_1403DD65C @ 0x1403DD65C (sub_1403DD65C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 *     sub_14051DB18 @ 0x14051DB18 (sub_14051DB18.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140A61CF4 @ 0x140A61CF4 (sub_140A61CF4.c)
 */

__int64 __fastcall sub_140A543D8(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 result; // rax
  char v10; // al
  __int64 *v11; // rdi
  __int64 v12; // r12
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  const char *v20; // rcx
  __int64 v21; // r8
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 && (int)sub_1403DD65C() < 0 )
    return 3221225473LL;
  if ( byte_140C4BCBC )
  {
    if ( byte_140C4C678 )
    {
      HviGetHardwareFeatures((__int64)&v25, a2, a3, a4);
      v10 = BYTE4(v25);
      if ( BYTE4(v25) )
        goto LABEL_52;
    }
    return 0LL;
  }
  if ( dword_140C4BE40 && (__int64 *)qword_140C4BCE0 == &qword_140C4BCE0 )
    return 3221225659LL;
  v6 = 0;
  v7 = 0x10000LL;
  do
  {
    v8 = (__int64 *)qword_140C4BCE0;
    while ( v8 != &qword_140C4BCE0 )
    {
      v11 = v8;
      v12 = (__int64)v8;
      v8 = (__int64 *)*v8;
      v13 = *((_DWORD *)v11 + 118);
      if ( (v13 & 0x40) == 0 && dword_140C4BE40 )
        return 3221225659LL;
      v14 = (v11[59] & 0x20) != 0;
      if ( (v13 & 0x100) != 0 )
      {
        if ( !v6 && !a1 )
        {
          v15 = *((_DWORD *)v11 + 110);
          if ( v15 > 0x10000 )
            v15 = 0x10000;
          v16 = sub_1403BECF8(4 * ((v15 + 32) >> 5));
          *((_DWORD *)v11 + 114) = v15;
          v11[58] = v16;
          RtlClearAllBits((PRTL_BITMAP)(v11 + 57));
          v11[56] = 0LL;
        }
        v14 = (dword_140C4BCF0 == 3) + 1;
LABEL_28:
        if ( !v6 )
        {
          if ( !a1 )
          {
            v17 = v11[68];
            if ( v17 )
            {
              v18 = *((_DWORD *)v11 + 118);
              if ( (v18 & 0x100) != 0
                && ((int)sub_140A61CF4(a2, v17, (unsigned int)((unsigned __int16)v18 >> 13) + 1) < 0
                 || (int)sub_14042A5E0(v11[2], *(unsigned int *)v11[68]) < 0) )
              {
                return 3221225473LL;
              }
            }
          }
          *(_QWORD *)&v23 = 0LL;
          HIDWORD(v24) = 0;
          *((_QWORD *)&v23 + 1) = __PAIR64__(dword_140C4BE40, v14);
          LODWORD(v24) = sub_14051DB18();
          if ( (int)sub_14042A5E0(v11[2], &v23) < 0 )
            return 3221225473LL;
        }
        if ( v6 >= 2 )
        {
          if ( v11[36] )
          {
            if ( a1 )
            {
              if ( (v11[47] & 2) != 0 )
              {
                LOBYTE(v7) = 1;
                result = sub_14042A5E0(v11[2], v7);
                if ( (int)result < 0 )
                  return result;
              }
              sub_14042A5E0(v11[2], v7);
            }
            else
            {
              *((_QWORD *)&v22 + 1) = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
              *(_QWORD *)&v22 = 1LL << (dword_140D0E5E0[0] & 0x3F);
              if ( !sub_140252460() || (v19 = 6, (v11[59] & 0x10) != 0) )
                v19 = 1073741822;
              sub_140517DCC(v12, v19, &v22);
            }
          }
        }
        else
        {
          result = sub_14042A5E0(v11[2], v6);
          if ( (int)result < 0 )
            return result;
        }
        v7 = 0x10000LL;
      }
      else if ( (v13 & 0x20) != 0 || dword_140C4BE40 )
      {
        goto LABEL_28;
      }
    }
    ++v6;
  }
  while ( v6 < 3 );
  sub_1403B6450();
  sub_1403B6420();
  if ( !dword_140C4BE64 )
    return 0LL;
  v10 = 12;
  v20 = "\t";
  byte_140C0CA9C = 12;
  v21 = (unsigned int)dword_140C4BE64;
  do
  {
    v10 += *v20;
    v20 += 4;
    --v21;
  }
  while ( v21 );
LABEL_52:
  byte_140C0CA9C = v10;
  return 0LL;
}
