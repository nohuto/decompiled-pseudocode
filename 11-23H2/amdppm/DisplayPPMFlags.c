/*
 * XREFs of DisplayPPMFlags @ 0x1C003F770
 * Callers:
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004FC8 (WPP_RECORDER_SF_s.c)
 */

void __fastcall DisplayPPMFlags(__int64 a1, unsigned __int8 a2)
{
  const char *v4; // rdi
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rax
  const char *v34; // rax
  const char *v35; // rax
  const char *v36; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2u,
        0x3Du,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = "En";
      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v5 = "En";
        if ( (a1 & 1) == 0 )
          v5 = "Dis";
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2u,
          0x3Eu,
          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
          v5);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v6 = "En";
          if ( (a1 & 2) == 0 )
            v6 = "Dis";
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            2u,
            0x3Fu,
            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
            v6);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = "En";
            if ( (a1 & 4) == 0 )
              v7 = "Dis";
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              a2,
              2u,
              0x40u,
              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
              v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v8 = "En";
              if ( (a1 & 0x100000) == 0 )
                v8 = "Dis";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2u,
                0x41u,
                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                v8);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v9 = "En";
                if ( (a1 & 0x200000) == 0 )
                  v9 = "Dis";
                WPP_RECORDER_SF_s(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  2u,
                  0x42u,
                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                  v9);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    2u,
                    0x43u,
                    (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      a2,
                      2u,
                      0x44u,
                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v10 = "En";
                      if ( (a1 & 0x10) == 0 )
                        v10 = "Dis";
                      WPP_RECORDER_SF_s(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2u,
                        0x45u,
                        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                        v10);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v11 = "En";
                        if ( (a1 & 0x20) == 0 )
                          v11 = "Dis";
                        WPP_RECORDER_SF_s(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          a2,
                          2u,
                          0x46u,
                          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                          v11);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v12 = "En";
                          if ( (a1 & 0x40) == 0 )
                            v12 = "Dis";
                          WPP_RECORDER_SF_s(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            2u,
                            0x47u,
                            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                            v12);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            v13 = "En";
                            if ( (a1 & 0x7F000) == 0 )
                              v13 = "Dis";
                            WPP_RECORDER_SF_s(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              a2,
                              2u,
                              0x48u,
                              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                              v13);
                          }
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            {
                              v14 = "En";
                              if ( (a1 & 0x80000000000LL) == 0 )
                                v14 = "Dis";
                              WPP_RECORDER_SF_s(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                a2,
                                2u,
                                0x49u,
                                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                v14);
                            }
                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            {
                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                              {
                                v15 = "En";
                                if ( (a1 & 0x20000000000LL) == 0 )
                                  v15 = "Dis";
                                WPP_RECORDER_SF_s(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  a2,
                                  2u,
                                  0x4Au,
                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                  v15);
                              }
                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              {
                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                {
                                  v16 = "En";
                                  if ( (a1 & 0x40000000000LL) == 0 )
                                    v16 = "Dis";
                                  WPP_RECORDER_SF_s(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    a2,
                                    2u,
                                    0x4Bu,
                                    (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                    v16);
                                }
                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                {
                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  {
                                    v17 = "En";
                                    if ( (a1 & 0xE0000000000LL) == 0 )
                                      v17 = "Dis";
                                    WPP_RECORDER_SF_s(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      a2,
                                      2u,
                                      0x4Cu,
                                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                      v17);
                                  }
                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                  {
                                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                    {
                                      v18 = "En";
                                      if ( (a1 & 0x1000000) == 0 )
                                        v18 = "Dis";
                                      WPP_RECORDER_SF_s(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        2u,
                                        0x4Du,
                                        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                        v18);
                                    }
                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                    {
                                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                      {
                                        v19 = "En";
                                        if ( (a1 & 0x2000000) == 0 )
                                          v19 = "Dis";
                                        WPP_RECORDER_SF_s(
                                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                          a2,
                                          2u,
                                          0x4Eu,
                                          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                          v19);
                                      }
                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                      {
                                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                        {
                                          v20 = "En";
                                          if ( (a1 & 0x10000000) == 0 )
                                            v20 = "Dis";
                                          WPP_RECORDER_SF_s(
                                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                            a2,
                                            2u,
                                            0x4Fu,
                                            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                            v20);
                                        }
                                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                        {
                                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                          {
                                            v21 = "En";
                                            if ( (a1 & 0x20000000) == 0 )
                                              v21 = "Dis";
                                            WPP_RECORDER_SF_s(
                                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                              a2,
                                              2u,
                                              0x50u,
                                              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                              v21);
                                          }
                                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                          {
                                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                            {
                                              v22 = "En";
                                              if ( (a1 & 0x40000000) == 0 )
                                                v22 = "Dis";
                                              WPP_RECORDER_SF_s(
                                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                a2,
                                                2u,
                                                0x51u,
                                                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                v22);
                                            }
                                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                            {
                                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                              {
                                                v23 = "En";
                                                if ( (a1 & 0x80000000) == 0 )
                                                  v23 = "Dis";
                                                WPP_RECORDER_SF_s(
                                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                  a2,
                                                  2u,
                                                  0x52u,
                                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                  v23);
                                              }
                                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                              {
                                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                {
                                                  v24 = "En";
                                                  if ( (a1 & 0x8000000) == 0 )
                                                    v24 = "Dis";
                                                  WPP_RECORDER_SF_s(
                                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                    a2,
                                                    2u,
                                                    0x53u,
                                                    (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                    v24);
                                                }
                                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                {
                                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                  {
                                                    v25 = "En";
                                                    if ( (a1 & 0x4000000000LL) == 0 )
                                                      v25 = "Dis";
                                                    WPP_RECORDER_SF_s(
                                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                      a2,
                                                      2u,
                                                      0x54u,
                                                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                      v25);
                                                  }
                                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                  {
                                                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                    {
                                                      v26 = "En";
                                                      if ( (a1 & 0x4000000) == 0 )
                                                        v26 = "Dis";
                                                      WPP_RECORDER_SF_s(
                                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                        a2,
                                                        2u,
                                                        0x55u,
                                                        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                        v26);
                                                    }
                                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                    {
                                                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                        WPP_RECORDER_SF_(
                                                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                          a2,
                                                          2u,
                                                          0x56u,
                                                          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                      {
                                                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                          WPP_RECORDER_SF_(
                                                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                            a2,
                                                            2u,
                                                            0x57u,
                                                            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                                                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                        {
                                                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                          {
                                                            v27 = "En";
                                                            if ( (a1 & 0x100000000LL) == 0 )
                                                              v27 = "Dis";
                                                            WPP_RECORDER_SF_s(
                                                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                              a2,
                                                              2u,
                                                              0x58u,
                                                              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                              v27);
                                                          }
                                                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                          {
                                                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                            {
                                                              v28 = "En";
                                                              if ( (a1 & 0x200000000LL) == 0 )
                                                                v28 = "Dis";
                                                              WPP_RECORDER_SF_s(
                                                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                a2,
                                                                2u,
                                                                0x59u,
                                                                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                v28);
                                                            }
                                                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                            {
                                                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                              {
                                                                v29 = "En";
                                                                if ( (a1 & 0x300) == 0 )
                                                                  v29 = "Dis";
                                                                WPP_RECORDER_SF_s(
                                                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                  a2,
                                                                  2u,
                                                                  0x5Au,
                                                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                  v29);
                                                              }
                                                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                              {
                                                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                {
                                                                  v30 = "En";
                                                                  if ( (a1 & 0x100000000000LL) == 0 )
                                                                    v30 = "Dis";
                                                                  WPP_RECORDER_SF_s(
                                                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                    a2,
                                                                    2u,
                                                                    0x5Bu,
                                                                    (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                    v30);
                                                                }
                                                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                {
                                                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                  {
                                                                    v31 = "En";
                                                                    if ( (a1 & 0x400) == 0 )
                                                                      v31 = "Dis";
                                                                    WPP_RECORDER_SF_s(
                                                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                      a2,
                                                                      2u,
                                                                      0x5Cu,
                                                                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                      v31);
                                                                  }
                                                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                  {
                                                                    if ( a2 < 5u
                                                                      || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                    {
                                                                      v32 = "En";
                                                                      if ( (a1 & 0x1000000000LL) == 0 )
                                                                        v32 = "Dis";
                                                                      WPP_RECORDER_SF_s(
                                                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                        a2,
                                                                        2u,
                                                                        0x5Du,
                                                                        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                        v32);
                                                                    }
                                                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                    {
                                                                      if ( a2 < 5u
                                                                        || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                      {
                                                                        v33 = "En";
                                                                        if ( (a1 & 0x10000000000LL) == 0 )
                                                                          v33 = "Dis";
                                                                        WPP_RECORDER_SF_s(
                                                                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                          a2,
                                                                          2u,
                                                                          0x5Eu,
                                                                          (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                          v33);
                                                                      }
                                                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                      {
                                                                        if ( a2 < 5u
                                                                          || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                        {
                                                                          WPP_RECORDER_SF_(
                                                                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                            a2,
                                                                            2u,
                                                                            0x5Fu,
                                                                            (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                                                                        }
                                                                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                        {
                                                                          if ( a2 < 5u
                                                                            || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                          {
                                                                            WPP_RECORDER_SF_(
                                                                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                              a2,
                                                                              2u,
                                                                              0x60u,
                                                                              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                                                                          }
                                                                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                          {
                                                                            if ( a2 < 5u
                                                                              || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                            {
                                                                              v34 = "En";
                                                                              if ( (a1 & 0x200000000000LL) == 0 )
                                                                                v34 = "Dis";
                                                                              WPP_RECORDER_SF_s(
                                                                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                                a2,
                                                                                2u,
                                                                                0x61u,
                                                                                (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                                v34);
                                                                            }
                                                                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                            {
                                                                              if ( a2 < 5u
                                                                                || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                              {
                                                                                v35 = "En";
                                                                                if ( (a1 & 0x400000000000LL) == 0 )
                                                                                  v35 = "Dis";
                                                                                WPP_RECORDER_SF_s(
                                                                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                                  a2,
                                                                                  2u,
                                                                                  0x62u,
                                                                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                                  v35);
                                                                              }
                                                                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                              {
                                                                                if ( a2 < 5u
                                                                                  || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                                {
                                                                                  v36 = "En";
                                                                                  if ( (a1 & 0x800000000LL) == 0 )
                                                                                    v36 = "Dis";
                                                                                  WPP_RECORDER_SF_s(
                                                                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                                    a2,
                                                                                    2u,
                                                                                    0x63u,
                                                                                    (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                                    v36);
                                                                                }
                                                                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                                {
                                                                                  if ( a2 < 5u
                                                                                    || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                                  {
                                                                                    if ( (a1 & 0x2000000000LL) == 0 )
                                                                                      v4 = "Dis";
                                                                                    WPP_RECORDER_SF_s(
                                                                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                                      a2,
                                                                                      2u,
                                                                                      0x64u,
                                                                                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
                                                                                      v4);
                                                                                  }
                                                                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                                                                                    && (a2 < 5u
                                                                                     || LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                                                                                  {
                                                                                    WPP_RECORDER_SF_(
                                                                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                                                                      a2,
                                                                                      2u,
                                                                                      0x65u,
                                                                                      (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
